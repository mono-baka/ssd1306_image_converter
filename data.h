/*image matrix(128*64)*/
const uint8_t image[] = {
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0XE0, 0XF0, 
	0XF8, 0X1C, 0X1E, 0X1E, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0X1E, 0X1E, 0X1C, 0XB8, 
	0XF0, 0XE0, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X80, 0XC0, 0XC0, 0XC0, 
	0XC0, 0XC0, 0XC0, 0XE0, 0XF0, 0XFB, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFE, 0XFF, 0X7F, 0X7F, 0X3F, 0X3F, 
	0X3F, 0X3F, 0X7F, 0X7F, 0XFF, 0XFE, 0XFE, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XF8, 0XE0, 0XC0, 0XC0, 0XC0, 
	0XC0, 0XC0, 0XC0, 0X80, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0XFC, 0XFE, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XEF, 0X01, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 
	0XE0, 0XFF, 0XFF, 0XFF, 0XFF, 0X01, 0XC7, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFE, 0XFC, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0XF8, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XF9, 0X00, 0X0F, 0X1F, 0X3F, 0XFF, 0XBF, 
	0XBF, 0XBF, 0XBF, 0XBF, 0XFD, 0X3D, 0X38, 0X39, 
	0X39, 0X38, 0X39, 0XBD, 0XBF, 0XBF, 0XBF, 0XBF, 
	0XBF, 0XBF, 0X3F, 0X1F, 0X0F, 0X00, 0XF0, 0XFD, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X0E, 0X7F, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XE0, 0X00, 0XE0, 0XF0, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XE0, 0X00, 0X00, 
	0X00, 0X00, 0XE0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XF0, 0XE0, 0X00, 0X00, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0X7F, 0X3F, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X01, 0X01, 0X03, 0X03, 
	0X03, 0XC3, 0XE3, 0XFC, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XE0, 0X00, 
	0X00, 0XE0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
	0XFF, 0XFF, 0XFF, 0XFF, 0XFE, 0XE0, 0XC3, 0X03, 
	0X03, 0X03, 0X01, 0X01, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0XFF, 0X03, 
	0X03, 0XF3, 0XF3, 0XF3, 0X83, 0X03, 0XF3, 0XF3, 
	0XF3, 0XF3, 0X03, 0XC3, 0XC3, 0XC3, 0XC3, 0XC3, 
	0X03, 0XF3, 0XF3, 0X83, 0X83, 0XC3, 0X43, 0X83, 
	0XC3, 0XC3, 0XC3, 0XC3, 0X83, 0X03, 0XC3, 0XC3, 
	0XC3, 0XC3, 0X03, 0X03, 0X03, 0X03, 0XF3, 0XF3, 
	0XB3, 0XB3, 0X33, 0XB3, 0XC3, 0XC3, 0XC3, 0XC3, 
	0XC3, 0X03, 0XF3, 0XF3, 0X03, 0XC3, 0XC3, 0XC3, 
	0XC3, 0XC3, 0XC3, 0XC3, 0XC3, 0XC3, 0X83, 0X03, 
	0X03, 0XFF, 0XFF, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0XFF, 0XFF, 0XC0, 
	0XC0, 0XCF, 0XCF, 0XC7, 0XCF, 0XCF, 0XCF, 0XCF, 
	0XCF, 0XCF, 0XCC, 0XCF, 0XDF, 0XCB, 0XCF, 0XCF, 
	0XC0, 0XCF, 0XCF, 0XC7, 0XC7, 0XCF, 0XCC, 0XCF, 
	0XCF, 0XDF, 0XDB, 0XCB, 0XCB, 0XC0, 0XCF, 0XCF, 
	0XC0, 0XC0, 0XC0, 0XC0, 0XC0, 0XC0, 0XCF, 0XCF, 
	0XC1, 0XC1, 0XC1, 0XCE, 0XDF, 0XDF, 0XCB, 0XCF, 
	0XCF, 0XC0, 0XCF, 0XCF, 0XC0, 0XDF, 0XCF, 0XC1, 
	0XC0, 0XC7, 0XCF, 0XCF, 0XDB, 0XDB, 0XCF, 0XC0, 
	0XC0, 0XFF, 0XFF, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 
	0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00
};