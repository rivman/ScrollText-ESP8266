// Resource for main file.
// Picture of QR-Code for www.waldi.familyds.com/esp
#define qr_code_width 128
#define qr_code_height 64
static unsigned char qr_code_bits[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0xf8, 0xfc, 0x8f, 0x31, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0xf8, 0xfc, 0x8f, 0x31, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0x1c, 0x70, 0x3e, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0x1c, 0x70, 0x3e, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0x1c, 0x70, 0x3e, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0xf8, 0x80, 0x0f, 0x30, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0xf8, 0x80, 0x0f, 0x30, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x9c, 0x73, 0x3e, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x9c, 0x73, 0x3e, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x9c, 0x73, 0x3e, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0xf8, 0x63, 0xf0, 0x31, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0xf8, 0x63, 0xf0, 0x31, 0x07, 0x9c, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0xe3, 0x03, 0x30, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0xe3, 0x03, 0x30, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0x63, 0x8c, 0x31, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0x63, 0x8c, 0x31, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0x63, 0x8c, 0x31, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7c, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7c, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xc0, 0x00, 0x60, 0x80, 0xc1, 0x18, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xc0, 0x00, 0x60, 0x80, 0xc1, 0x18, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xc0, 0x00, 0x60, 0x80, 0xc1, 0x18, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xc1, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xc1, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xf0, 0x18, 0x1c, 0x70, 0xce, 0xf8, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xf0, 0x18, 0x1c, 0x70, 0xce, 0xf8, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xf0, 0x18, 0x1c, 0x70, 0xce, 0xf8, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xfe, 0xff, 0x80, 0x0f, 0xf0, 0x07, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0xfe, 0xff, 0x80, 0x0f, 0xf0, 0x07, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x8f, 0xcf, 0xf8, 0x1c, 0x80, 0x0f, 0x07, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x8f, 0xcf, 0xf8, 0x1c, 0x80, 0x0f, 0x07, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x8f, 0xcf, 0xf8, 0x1c, 0x80, 0x0f, 0x07, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x83, 0xf1, 0xe7, 0x60, 0xf0, 0xf1, 0xf8, 0xe0, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x83, 0xf1, 0xe7, 0x60, 0xf0, 0xf1, 0xf8, 0xe0, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xce, 0xe0, 0x63, 0x00, 0x00, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xce, 0xe0, 0x63, 0x00, 0x00, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xce, 0xe0, 0x63, 0x00, 0x00, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xf0, 0xff, 0x7c, 0x0c, 0xfe, 0xf8, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xf0, 0xff, 0x7c, 0x0c, 0xfe, 0xf8, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0x3e, 0x00, 0xe0, 0x83, 0x01, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0x3e, 0x00, 0xe0, 0x83, 0x01, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0x3e, 0x00, 0xe0, 0x83, 0x01, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x80, 0x73, 0xf0, 0xe7, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x80, 0x73, 0xf0, 0xe7, 0xe3, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0xfc, 0x8f, 0x31, 0xe7, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0xfc, 0x8f, 0x31, 0xe7, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf8, 0x1c, 0x8c, 0xf1, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf8, 0x1c, 0x8c, 0xf1, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf8, 0x1c, 0x8c, 0xf1, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0xfc, 0x73, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0xfc, 0x73, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x83, 0xf3, 0x0f, 0x07, 0x83, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x83, 0xf3, 0x0f, 0x07, 0x83, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0x83, 0xf3, 0x0f, 0x07, 0x83, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0xff, 0x83, 0xf1, 0xf8, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x73, 0xc0, 0x18, 0xff, 0x83, 0xf1, 0xf8, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0xe0, 0x0f, 0x30, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0xe0, 0x0f, 0x30, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x18, 0xe0, 0x0f, 0x30, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0x7f, 0x80, 0x0f, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x18, 0x7f, 0x80, 0x0f, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
}; 

