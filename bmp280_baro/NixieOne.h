#include <avr/pgmspace.h>

const uint8_t ssd1306xled_NixieOne [] PROGMEM = { 
// Nixie One, size: 33
// Width=12, Height=24
//32  
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//33 !
0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x0E,0x0F,0x0E,0x0C,0x00,0x00,0x00,0x00,
//34 "
0x00,0x00,0xE0,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//35 #
0x00,0x00,0x00,0x00,0xC0,0x20,0x00,0x00,0x00,0xE0,0x00,0x00,
0x80,0x80,0x82,0xF2,0x8F,0x82,0x82,0xE2,0xBF,0x82,0x82,0x02,
0x00,0x00,0x0E,0x01,0x00,0x00,0x08,0x07,0x00,0x00,0x00,0x00,
//36 $
0x00,0xC0,0x60,0x20,0x20,0xF0,0xF0,0x20,0x60,0x40,0xE0,0x00,
0x00,0x83,0x04,0x0C,0x08,0xFF,0xFF,0x10,0x30,0x20,0xE3,0x00,
0x00,0x0F,0x06,0x04,0x0C,0x1F,0x1F,0x08,0x08,0x04,0x03,0x01,
//37 %
0x80,0x60,0x20,0x20,0x60,0xC0,0x00,0x00,0xC0,0x00,0x00,0x00,
0x03,0x04,0x08,0x08,0xCC,0x33,0xCC,0x23,0x20,0x20,0xE0,0x80,
0x00,0x00,0x0C,0x07,0x01,0x00,0x03,0x0C,0x08,0x08,0x06,0x01,
//38 &
0x00,0x00,0x80,0x60,0x20,0x20,0x20,0x60,0x40,0x00,0x00,0x00,
0x80,0xE0,0x31,0x17,0x18,0x30,0x60,0x80,0x80,0xC0,0x30,0x00,
0x01,0x07,0x08,0x08,0x08,0x08,0x0C,0x07,0x03,0x0E,0x08,0x08,
//39 '
0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//40 (
0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x10,0x18,0x00,0x00,
0x00,0x00,0x00,0xFC,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0x0E,0x18,0x30,0x60,0x40,0x00,0x00,
//41 )
0x00,0x00,0x08,0x18,0x30,0x60,0xE0,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,
0x00,0x00,0x40,0x60,0x20,0x18,0x0C,0x07,0x03,0x00,0x00,0x00,
//42 *
0x00,0x00,0x40,0x80,0x80,0xE0,0xE0,0x80,0xC0,0x40,0x00,0x00,
0x00,0x00,0x06,0x02,0x01,0x0F,0x0F,0x03,0x02,0x06,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//43 +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x30,0x30,0x30,0x30,0xFE,0x30,0x30,0x30,0x30,0x30,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
//44 ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x6C,0x2E,0x2E,0x3E,0x0C,0x00,0x00,0x00,0x00,
//45 -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//46 .
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0C,0x0E,0x0E,0x0E,0x04,0x00,0x00,0x00,0x00,
//47 /
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x60,0x00,
0x00,0x00,0x00,0x80,0x60,0x30,0x18,0x06,0x03,0x00,0x00,0x00,
0x08,0x0C,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//48 0
0x00,0x00,0xC0,0x60,0x20,0x20,0x20,0x20,0x60,0x80,0x00,0x00,
0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x00,
0x00,0x01,0x03,0x04,0x08,0x08,0x08,0x08,0x04,0x03,0x00,0x00,
//49 1
0x00,0x80,0x80,0xC0,0x60,0x20,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0x08,0x08,0x08,0x0F,0x08,0x08,0x08,0x08,0x00,
//50 2
0x00,0x40,0x60,0x20,0x20,0x20,0x20,0x20,0x20,0x60,0x80,0x00,
0x00,0x00,0x80,0xC0,0x40,0x20,0x20,0x10,0x18,0x0C,0x03,0x00,
0x00,0x0F,0x09,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0F,0x00,
//51 3
0x00,0x40,0x60,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x36,0xE3,0x00,
0x00,0x06,0x04,0x0C,0x08,0x08,0x08,0x08,0x0C,0x06,0x03,0x00,
//52 4
0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0xE0,0xB0,0x8E,0x83,0x80,0x80,0x80,0x80,0xFE,0x80,0x80,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x0F,0x01,0x00,
//53 5
0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,
0x00,0x0F,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0xF0,0x00,
0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x0C,0x04,0x02,0x01,0x00,
//54 6
0x00,0x00,0x00,0xC0,0x40,0x20,0x30,0x30,0x10,0x10,0x00,0x00,
0x00,0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0xF0,0xC0,
0x00,0x01,0x07,0x04,0x08,0x08,0x08,0x08,0x08,0x04,0x07,0x00,
//55 7
0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xA0,0xE0,0x20,
0x01,0x00,0x00,0x00,0x00,0xC0,0x70,0x0C,0x07,0x01,0x00,0x00,
0x00,0x00,0x00,0x00,0x0E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
//56 8
0x00,0x80,0xC0,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x80,0x00,
0x00,0xC1,0x66,0x3C,0x18,0x18,0x18,0x18,0x3C,0x26,0xC3,0x00,
0x00,0x03,0x04,0x0C,0x08,0x08,0x08,0x08,0x0C,0x04,0x03,0x00,
//57 9
0x00,0xC0,0x60,0x20,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,
0x00,0x1F,0x30,0x20,0x40,0x40,0x40,0x40,0x40,0xC0,0x7F,0x00,
0x00,0x00,0x08,0x08,0x08,0x08,0x0C,0x06,0x03,0x01,0x00,0x00,
//58 :
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x04,0x0E,0x0E,0x0E,0x04,0x00,0x00,0x00,0x00,
//59 ;
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x44,0x6E,0x2E,0x3E,0x1C,0x00,0x00,0x00,0x00,
//60 <
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x40,0x60,0xE0,0xA0,0x90,0x18,0x08,0x08,0x04,0x06,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x02,0x06,0x04,0x00,0x00,
//61 =
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//62 >
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0x06,0x04,0x08,0x08,0x18,0x90,0xA0,0xE0,0x60,0x40,
0x00,0x04,0x04,0x06,0x02,0x02,0x01,0x01,0x00,0x00,0x00,0x00,
//63 ?
0x00,0xC0,0x60,0x20,0x20,0x20,0x20,0x20,0x20,0x40,0x80,0x00,
0x00,0x01,0x00,0x00,0x00,0xC0,0x60,0x30,0x18,0x0C,0x07,0x00,
0x00,0x00,0x00,0x00,0x00,0x0E,0x0C,0x00,0x00,0x00,0x00,0x00,
//64 @
0x00,0x00,0x80,0x60,0x20,0x20,0x20,0x20,0x60,0x80,0x00,0x00,
0xF0,0x07,0x00,0xFC,0x06,0x02,0x02,0x0C,0xFE,0x00,0x07,0xF0,
0x00,0x0E,0x30,0x43,0xCC,0x88,0x88,0xC6,0x4F,0x28,0x0E,0x00
};

const DCfont TinyOLED4kNixieOne = {
  (uint8_t *)ssd1306xled_NixieOne,
  12, // character width in pixels
  3, // character height in pages (8 pixels)
  32,64 // ASCII extents
};

// for backwards compatibility
#define NIXIEONE (&TinyOLED4kNixieOne)
