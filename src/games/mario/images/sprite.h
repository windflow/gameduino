#ifndef SPRITE_IMG_H
#define SPRITE_IMG_H

#include <Arduino.h>

static const unsigned char PROGMEM SPRITE_FORWARD_1 [] = {
    0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xF0, 0x0F, 0xFB, 0x80, 0x0F,
    0xC7, 0x40, 0x3F, 0xE1, 0x30, 0x3D, 0xE0, 0x50, 0x3C, 0xC3, 0xC0, 0x3F, 0x07, 0xF0, 0x01, 0x05,
    0x00, 0x01, 0x0A, 0x8C, 0x0F, 0xBF, 0x0C, 0x0F, 0xFF, 0x3C, 0x1F, 0xFD, 0xFC, 0x1F, 0xFF, 0xF0,
    0x0B, 0x1C, 0xF0, 0x07, 0x28, 0xF0, 0x03, 0xFF, 0xD0, 0x06, 0xD7, 0x70, 0x03, 0xF1, 0xE0, 0x01,
    0xE3, 0xC0, 0x07, 0xE3, 0xF0, 0x07, 0xF3, 0xF0,
};

static const unsigned char PROGMEM SPRITE_FORWARD_2 [] = {
0x03, 0xF0, 0x03, 0xF0, 0x0F, 0xFF, 0x0F, 0xFF, 0x3F, 0xEE, 0x3F, 0x1D, 0xFF, 0x84, 0xF7, 0x81,
0xF3, 0x0F, 0xFC, 0x1F, 0x04, 0x14, 0x04, 0x2A, 0x3E, 0xFC, 0x3F, 0xFC, 0x7F, 0xF7, 0x7F, 0xFF,
0x2C, 0x73, 0x5C, 0xA3, 0x4F, 0xFF, 0x7B, 0x5D, 0x0F, 0xC7, 0x03, 0xC7, 0x03, 0xC7, 0x03, 0xE7,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM SPRITE_BACKWARD_1 [] = {
    0x00, 0xFC, 0x00, 0xFC, 0x3F, 0xFF, 0x3F, 0xFF, 0x07, 0x7F, 0x0B, 0x8F, 0x32, 0x1F, 0x28, 0x1E,
    0x0F, 0x0C, 0x3F, 0x83, 0x02, 0x82, 0xC5, 0x42, 0xC3, 0xF7, 0xF3, 0xFF, 0xFE, 0xFF, 0x3F, 0xFF,
    0x3C, 0xE3, 0x3C, 0x53, 0x2F, 0xFF, 0x3B, 0xAD, 0x1E, 0x3F, 0x0F, 0x1E, 0x3F, 0x1F, 0x3F, 0x3F,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char PROGMEM SPRITE_BACKWARD_2 [] = {
    0x00, 0xFC, 0x00, 0xFC, 0x3F, 0xFF, 0x3F, 0xFF, 0x07, 0x7F, 0x0B, 0x8F, 0x32, 0x1F, 0x28, 0x1E,
    0x0F, 0x0C, 0x3F, 0x83, 0x02, 0x82, 0x05, 0x42, 0x03, 0xF7, 0x03, 0xFF, 0x7E, 0xFF, 0x3F, 0xFF,
    0x7C, 0xE3, 0xBC, 0x53, 0xAF, 0xFF, 0x9B, 0xAD, 0x1E, 0x3F, 0x1E, 0x3C, 0x7E, 0x3C, 0x7E, 0x7C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif