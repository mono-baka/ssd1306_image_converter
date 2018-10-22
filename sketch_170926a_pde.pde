String convert_image;// = "xxx.jpg";
PImage img,img2;
int[] hist = new int[256];
int hist_margin = 5;
int message_space = 30;
float threshold = 0.0;
int[] rect_point = new int[4];
boolean OK = false;
String message = "Please scroll to find threshold!";
int[] center = new int[2];

void setup() {
  noLoop();
  selectInput("Select a image file to convert", "fileSelected");
}
void fileSelected(File selection) {
  if (selection == null) {
    println("Window was closed or the user hit cancel.");
    exit();
  } else {
    println("User selected " + selection.getAbsolutePath());
    convert_image = selection.getAbsolutePath();
    img = loadImage(convert_image);
    img2 = loadImage(convert_image);
    surface.setResizable(true);
    surface.setSize(img.width*2+256+hist_margin*2, img.height+message_space);
    // Calculate the histogram
    int dimension = img.width * img.height;
    img.loadPixels();
    for(int i=0;i<dimension;i++){
      int bright = int(brightness(img.pixels[i]));
      hist[bright]++;
    }
    textAlign(LEFT, TOP);
    textSize(24);
    loop();
  }
}

void draw() {
  if(img!=null){
    image(img, 0, 0);
    int histMax = max(hist);
    stroke(0);
    // Draw half of the histogram (skip every second value)
    for (int i = 0; i < 256; i++) {
      // Convert the histogram value to a location between 
      // the bottom and the top of the picture
      int y = int(map(hist[i], 0, histMax, img.height-hist_margin*2, 0));
      line(i+img.width+hist_margin, img.height-hist_margin, i+img.width+hist_margin, y+hist_margin);
    }
    noStroke();
    fill(204);
    rect(0, img.height, img.width, message_space);
    fill(255);
    text(message, 0, img.height);
  }
}
void mouseClicked() {
  if(OK){
    message = "finish!Please reload";
    PImage new_img = img.get(rect_point[0], rect_point[1], rect_point[2], rect_point[3]);
    new_img.resize(128, 64);
    new_img.filter(THRESHOLD, threshold);
    new_img.save(convert_image+"_out.png");
    image(new_img,
      (img.width*2+256+hist_margin*2)/2 - 64,
      (img.height+message_space)/2 - 32);
    noLoop();
    redraw();
    //make txt file for matrix
    PrintWriter data = createWriter("data.h");
    data.println("/*image matrix(128*64)*/");
    data.println("const uint8_t image[] = {");
    int buf;
    for(int j=0;j<8;j++){
      for(int i=0;i<new_img.width;i++){
        buf = 0;
        for(int k=0;k<8;k++){
          if(new_img.get(i,8*j+k)==color(0))
            buf += 1<<k;
        }
        if(i%8==0)
          data.printf("\t");
        if((7<=j) && (127<=i))
          data.printf("0X%02X", buf);
        else
          data.printf("0X%02X, ", buf);
        if((i+1)%8==0)
          data.printf("\r\n");
      }
    }
    data.println("};");
    data.flush();
    data.close();
  }
}
void mouseWheel(MouseEvent e){
  stroke(204);
  line(img.width+hist_margin+256*threshold, img.height-hist_margin,
    img.width+hist_margin+256*threshold, hist_margin);
  if(0<e.getAmount()){
    if(threshold+1/256.0<1)
      threshold += 1/256.0;
  }
  else{
    threshold -= 1/256.0;
    if(threshold<0)
      threshold = 0;
  }
  stroke(0, 255, 255);
  line(img.width+hist_margin+256*threshold, img.height-hist_margin,
    img.width+hist_margin+256*threshold, hist_margin);
  img2 = loadImage(convert_image);
  img2.filter(THRESHOLD, threshold);
  image(img2, img.width+256+hist_margin*2, 0);
  //x axis
  stroke(255, 0, 0);
  int right_line=-1, left_line=-1;
  for (int i = 0; i < img2.width; i++) {
    for (int j = 0; j < img2.height; j++) {
      if(img2.get(i, j)==color(0)){
        //get black position
        j = img2.height-1;
        right_line = i;
      }
      else{
        if(right_line==-1)
          left_line = i;
      }
    }
  }
  line(img.width+hist_margin*2+256+right_line, img.height,
    img.width+hist_margin*2+256+right_line, 0);
  line(img.width+hist_margin*2+256+left_line, img.height,
    img.width+hist_margin*2+256+left_line, 0);
  //y axis
  int up_line=-1, under_line=-1;
  for (int j = 0; j < img2.height; j++) {
    for (int i = 0; i < img2.width; i++) {
      if(img2.get(i, j)==color(0)){
        //get black position
        i = img2.width-1;
        under_line = j;
      }
      else{
        if(under_line==-1)
          up_line = j;
      }
    }
  }
  line(img.width+hist_margin*2+256, up_line,
    img.width+hist_margin*2+256+img2.width, up_line);
  line(img.width+hist_margin*2+256, under_line,
    img.width+hist_margin*2+256+img2.width, under_line);
  
  //triming to 128*64
  rect_point[0] = left_line;
  rect_point[1] = up_line;
  rect_point[2] = right_line-left_line;
  rect_point[3] = under_line-up_line;
  center[0] = rect_point[2]/2+rect_point[0];
  center[1] = rect_point[3]/2+rect_point[1];
  if((right_line-left_line)/(float)(under_line-up_line)<128/64.0){
    println("preference is y axis");
    int x_length = rect_point[3]*128/64;
    rect_point[2] = x_length;
    rect_point[0] = center[0]-x_length/2;
  }
  else{
    println("preference is x axis");
    int y_length = rect_point[2]*64/128;
    rect_point[3] = y_length;
    rect_point[1] = center[1]-y_length/2;
  }
  OK = true;
}
