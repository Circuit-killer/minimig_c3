#include "stdio.h"

// Utility to generate charrom.h, with characters 128 - 255 as rotated versions of 0 - 127.

// *character font
unsigned char charfont[256][8] =
{
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 0    [0x0]
        {0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55},         // 1    [0x1]
        {0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A},         // 2    [0x2]
        {0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14},         // 3    [0x3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 4    [0x4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 5    [0x5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 6    [0x6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 7    [0x7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 8    [0x8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 9    [0x9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 10   [0xa]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 11   [0xb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 12   [0xc]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 13   [0xd]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 14   [0xe]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 15   [0xf]
        {0x08,0x08,0x1C,0x1C,0x3E,0x3E,0x7F,0x7F},         // 16   [0x10] arrow left
        {0x7F,0x7F,0x3E,0x3E,0x1C,0x1C,0x08,0x08},         // 17   [0x11] arrow right
        {0x00,0x10,0x18,0x7c,0x7c,0x18,0x10,0x00},         // 18   [0x12] arrow up
        {0x00,0x10,0x30,0x7c,0x7c,0x30,0x10,0x00},         // 19   [0x13] arrow down
        {0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00},         // 20   [0x14]
        {0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C},         // 21   [0x15]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 22   [0x16]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 23   [0x17]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 24   [0x18]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 25   [0x19]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 26   [0x1a]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 27   [0x1b]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 28   [0x1c]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 29   [0x1d]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 30   [0x1e]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 31   [0x1f]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 32   [0x20]
        {0x00,0x00,0x00,0x5F,0x5F,0x00,0x00,0x00},         // 33   [0x21]
        {0x00,0x03,0x03,0x00,0x03,0x03,0x00,0x00},         // 34   [0x22]
        {0x14,0x7F,0x7F,0x14,0x7F,0x7F,0x14,0x00},         // 35   [0x23]
        {0x00,0x24,0x2E,0x6B,0x6B,0x3A,0x12,0x00},         // 36   [0x24]
        {0x4C,0x6A,0x36,0x18,0x6C,0x56,0x32,0x00},         // 37   [0x25]
        {0x30,0x7E,0x4F,0x59,0x77,0x3A,0x68,0x40},         // 38   [0x26]
        {0x00,0x00,0x04,0x07,0x03,0x00,0x00,0x00},         // 39   [0x27]
        {0x00,0x00,0x1C,0x3E,0x63,0x41,0x00,0x00},         // 40   [0x28]
        {0x00,0x00,0x41,0x63,0x3E,0x1C,0x00,0x00},         // 41   [0x29]
        {0x08,0x2A,0x3E,0x1C,0x1C,0x3E,0x2A,0x08},         // 42   [0x2a]
        {0x00,0x08,0x08,0x3E,0x3E,0x08,0x08,0x00},         // 43   [0x2b]
        {0x00,0x00,0x80,0xE0,0x60,0x00,0x00,0x00},         // 44   [0x2c]
        {0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x00},         // 45   [0x2d]
        {0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00},         // 46   [0x2e]
        {0x40,0x60,0x30,0x18,0x0C,0x06,0x03,0x01},         // 47   [0x2f]
        {0x00,0x3E,0x7F,0x59,0x4D,0x7F,0x3E,0x00},         // 48   [0x30]
        {0x00,0x04,0x06,0x7F,0x7F,0x00,0x00,0x00},         // 49   [0x31]
        {0x00,0x42,0x63,0x71,0x59,0x4F,0x46,0x00},         // 50   [0x32]
        {0x00,0x22,0x63,0x49,0x49,0x7F,0x36,0x00},         // 51   [0x33]
        {0x18,0x1C,0x16,0x13,0x7F,0x7F,0x10,0x00},         // 52   [0x34]
        {0x00,0x27,0x67,0x45,0x45,0x7D,0x39,0x00},         // 53   [0x35]
        {0x00,0x3C,0x7E,0x4B,0x49,0x79,0x30,0x00},         // 54   [0x36]
        {0x00,0x01,0x01,0x71,0x79,0x0F,0x07,0x00},         // 55   [0x37]
        {0x00,0x36,0x7F,0x49,0x49,0x7F,0x36,0x00},         // 56   [0x38]
        {0x00,0x06,0x4F,0x49,0x69,0x3F,0x1E,0x00},         // 57   [0x39]
        {0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00},         // 58   [0x3a]
        {0x00,0x00,0x80,0xE6,0x66,0x00,0x00,0x00},         // 59   [0x3b]
        {0x00,0x08,0x08,0x14,0x14,0x22,0x22,0x00},         // 60   [0x3c]
        {0x00,0x14,0x14,0x14,0x14,0x14,0x14,0x00},         // 61   [0x3d]
        {0x00,0x22,0x22,0x14,0x14,0x08,0x08,0x00},         // 62   [0x3e]
        {0x00,0x02,0x03,0x51,0x59,0x0F,0x06,0x00},         // 63   [0x3f]
        {0x3E,0x7F,0x41,0x5D,0x55,0x1F,0x1E,0x00},         // 64   [0x40]
        {0x00,0x7E,0x7F,0x09,0x09,0x7F,0x7E,0x00},         // 65   [0x41]
        {0x00,0x7F,0x7F,0x49,0x49,0x7F,0x36,0x00},         // 66   [0x42]
        {0x00,0x1C,0x3E,0x63,0x41,0x41,0x41,0x00},         // 67   [0x43]
        {0x00,0x7F,0x7F,0x41,0x63,0x3E,0x1C,0x00},         // 68   [0x44]
        {0x00,0x7F,0x7F,0x49,0x49,0x41,0x41,0x00},         // 69   [0x45]
        {0x00,0x7F,0x7F,0x09,0x09,0x01,0x01,0x00},         // 70   [0x46]
        {0x00,0x3E,0x7F,0x41,0x49,0x7B,0x7A,0x00},         // 71   [0x47]
        {0x00,0x7F,0x7F,0x08,0x08,0x7F,0x7F,0x00},         // 72   [0x48]
        {0x00,0x00,0x41,0x7F,0x7F,0x41,0x00,0x00},         // 73   [0x49]
        {0x00,0x20,0x60,0x40,0x40,0x7F,0x3F,0x00},         // 74   [0x4a]
        {0x7F,0x7F,0x08,0x1C,0x36,0x63,0x41,0x00},         // 75   [0x4b]
        {0x00,0x7F,0x7F,0x40,0x40,0x40,0x40,0x00},         // 76   [0x4c]
        {0x7F,0x7F,0x06,0x0C,0x06,0x7F,0x7F,0x00},         // 77   [0x4d]
        {0x7F,0x7F,0x06,0x0C,0x18,0x7F,0x7F,0x00},         // 78   [0x4e]
        {0x00,0x3E,0x7F,0x41,0x41,0x7F,0x3E,0x00},         // 79   [0x4f]
        {0x00,0x7F,0x7F,0x09,0x09,0x0F,0x06,0x00},         // 80   [0x50]
        {0x3E,0x7F,0x41,0x61,0x7F,0x7E,0x40,0x00},         // 81   [0x51]
        {0x00,0x7F,0x7F,0x09,0x19,0x7F,0x66,0x00},         // 82   [0x52]
        {0x00,0x26,0x6F,0x4D,0x59,0x7B,0x32,0x00},         // 83   [0x53]
        {0x00,0x01,0x01,0x7F,0x7F,0x01,0x01,0x00},         // 84   [0x54]
        {0x00,0x3F,0x7F,0x40,0x40,0x7F,0x3F,0x00},         // 85   [0x55]
        {0x00,0x0F,0x3F,0x70,0x70,0x3F,0x0F,0x00},         // 86   [0x56]
        {0x7F,0x7F,0x30,0x18,0x30,0x7F,0x7F,0x00},         // 87   [0x57]
        {0x41,0x63,0x36,0x1C,0x1C,0x36,0x63,0x41},         // 88   [0x58]
        {0x01,0x03,0x06,0x7C,0x7C,0x06,0x03,0x01},         // 89   [0x59]
        {0x61,0x71,0x59,0x4D,0x47,0x43,0x41,0x00},         // 90   [0x5a]
        {0x00,0x00,0x7F,0x7F,0x41,0x41,0x00,0x00},         // 91   [0x5b]
        {0x01,0x03,0x06,0x0C,0x18,0x30,0x60,0x40},         // 92   [0x5c]
        {0x00,0x00,0x41,0x41,0x7F,0x7F,0x00,0x00},         // 93   [0x5d]
        {0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,0x00},         // 94   [0x5e]
        {0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00},         // 95   [0x5f]
        {0x00,0x00,0x00,0x03,0x07,0x04,0x00,0x00},         // 96   [0x60]
        {0x00,0x20,0x74,0x54,0x54,0x7C,0x78,0x00},         // 97   [0x61]
        {0x00,0x7F,0x7F,0x44,0x44,0x7C,0x38,0x00},         // 98   [0x62]
        {0x00,0x38,0x7C,0x44,0x44,0x44,0x00,0x00},         // 99   [0x63]
        {0x00,0x38,0x7C,0x44,0x44,0x7F,0x7F,0x00},         // 100  [0x64]
        {0x00,0x38,0x7C,0x54,0x54,0x5C,0x18,0x00},         // 101  [0x65]
        {0x00,0x04,0x7E,0x7F,0x05,0x05,0x00,0x00},         // 102  [0x66]
        {0x00,0x18,0xBC,0xA4,0xA4,0xFC,0x7C,0x00},         // 103  [0x67]
        {0x00,0x7F,0x7F,0x04,0x04,0x7C,0x78,0x00},         // 104  [0x68]
        {0x00,0x00,0x00,0x3D,0x7D,0x40,0x00,0x00},         // 105  [0x69]
        {0x00,0x80,0x80,0x80,0xFD,0x7D,0x00,0x00},         // 106  [0x6a]
        {0x00,0x7F,0x7F,0x10,0x38,0x6C,0x44,0x00},         // 107  [0x6b]
        {0x00,0x00,0x00,0x3F,0x7F,0x40,0x00,0x00},         // 108  [0x6c]
        {0x7C,0x7C,0x0C,0x18,0x0C,0x7C,0x78,0x00},         // 109  [0x6d]
        {0x00,0x7C,0x7C,0x04,0x04,0x7C,0x78,0x00},         // 110  [0x6e]
        {0x00,0x38,0x7C,0x44,0x44,0x7C,0x38,0x00},         // 111  [0x6f]
        {0x00,0xFC,0xFC,0x24,0x24,0x3C,0x18,0x00},         // 112  [0x70]
        {0x00,0x18,0x3C,0x24,0x24,0xFC,0xFC,0x00},         // 113  [0x71]
        {0x00,0x7C,0x7C,0x04,0x04,0x0C,0x08,0x00},         // 114  [0x72]
        {0x00,0x48,0x5C,0x54,0x54,0x74,0x20,0x00},         // 115  [0x73]
        {0x00,0x04,0x3F,0x7F,0x44,0x44,0x00,0x00},         // 116  [0x74]
        {0x00,0x3C,0x7C,0x40,0x40,0x7C,0x7C,0x00},         // 117  [0x75]
        {0x00,0x1C,0x3C,0x60,0x60,0x3C,0x1C,0x00},         // 118  [0x76]
        {0x3C,0x7C,0x60,0x30,0x60,0x7C,0x3C,0x00},         // 119  [0x77]
        {0x44,0x6C,0x38,0x10,0x38,0x6C,0x44,0x00},         // 120  [0x78]
        {0x00,0x1C,0xBC,0xE0,0x60,0x3C,0x1C,0x00},         // 121  [0x79]
        {0x00,0x44,0x64,0x74,0x5C,0x4C,0x44,0x00},         // 122  [0x7a]
        {0x00,0x08,0x08,0x3E,0x77,0x41,0x41,0x00},         // 123  [0x7b]
        {0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00},         // 124  [0x7c]
        {0x00,0x41,0x41,0x77,0x3E,0x08,0x08,0x00},         // 125  [0x7d]
        {0x02,0x01,0x01,0x03,0x02,0x02,0x01,0x00},         // 126  [0x7e]
        {0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x00},         // 127  [0x7f]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 128  [0x80]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 129  [0x81]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 130  [0x82]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 131  [0x83]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 132  [0x84]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 133  [0x85]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 134  [0x86]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 135  [0x87]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 136  [0x88]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 137  [0x89]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 138  [0x8a]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 139  [0x8b]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 140  [0x8c]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 141  [0x8d]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 142  [0x8e]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 143  [0x8f]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 144  [0x90]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 145  [0x91]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 146  [0x92]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 147  [0x93]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 148  [0x94]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 149  [0x95]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 150  [0x96]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 151  [0x97]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 152  [0x98]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 153  [0x99]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 154  [0x9a]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 155  [0x9b]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 156  [0x9c]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 157  [0x9d]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 158  [0x9e]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 159  [0x9f]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 160  [0xa0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 161  [0xa1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 162  [0xa2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 163  [0xa3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 164  [0xa4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 165  [0xa5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 166  [0xa6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 167  [0xa7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 168  [0xa8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 169  [0xa9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 170  [0xaa]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 171  [0xab]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 172  [0xac]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 173  [0xad]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 174  [0xae]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 175  [0xaf]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 176  [0xb0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 177  [0xb1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 178  [0xb2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 179  [0xb3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 180  [0xb4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 181  [0xb5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 182  [0xb6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 183  [0xb7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 184  [0xb8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 185  [0xb9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 186  [0xba]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 187  [0xbb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 188  [0xbc]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 189  [0xbd]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 190  [0xbe]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 191  [0xbf]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 192  [0xc0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 193  [0xc1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 194  [0xc2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 195  [0xc3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 196  [0xc4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 197  [0xc5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 198  [0xc6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 199  [0xc7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 200  [0xc8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 201  [0xc9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 202  [0xca]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 203  [0xcb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 204  [0xcc]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 205  [0xcd]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 206  [0xce]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 207  [0xcf]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 208  [0xd0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 209  [0xd1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 210  [0xd2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 211  [0xd3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 212  [0xd4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 213  [0xd5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 214  [0xd6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 215  [0xd7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 216  [0xd8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 217  [0xd9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 218  [0xda]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 219  [0xdb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 220  [0xdc]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 221  [0xdd]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 222  [0xde]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 223  [0xdf]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 224  [0xe0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 225  [0xe1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 226  [0xe2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 227  [0xe3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 228  [0xe4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 229  [0xe5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 230  [0xe6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 231  [0xe7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 232  [0xe8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 233  [0xe9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 234  [0xea]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 235  [0xeb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 236  [0xec]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 237  [0xed]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 238  [0xee]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 239  [0xef]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 240  [0xf0]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 241  [0xf1]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 242  [0xf2]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 243  [0xf3]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 244  [0xf4]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 245  [0xf5]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 246  [0xf6]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 247  [0xf7]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 248  [0xf8]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 249  [0xf9]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 250  [0xfa]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 251  [0xfb]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 252  [0xfc]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 253  [0xfd]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},         // 254  [0xfe]
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}          // 255  [0xff]
};


void copychar(unsigned char *in,unsigned char *out)
{
	int i;
	for(i=0;i<8;++i)
	{
		out[i]=in[i];
	}		
}


void rotatechar(unsigned char *in,unsigned char *out)
{
	int a;
	int b;
	int c;
	for(b=0;b<8;++b)
	{
		a=0;
		for(c=0;c<8;++c)
		{
			a<<=1;
			a|=(in[c]>>b)&1;
		}
		out[b]=a;
	}		
}


int main(int argc,char **argv)
{
	int i=0;
	printf("#ifndef CHARROM_H\n#define CHARROM_H\n");
	printf("// *character font\n");
	printf("const unsigned char charfont[256][8] =\n{\n");
	for(i=0;i<128;++i)
	{
		if((i&0xfc)==0x10)	// Skip the arrows - don't want to rotate those!
			copychar(charfont[i],charfont[i+128]);
		else
			rotatechar(charfont[i],charfont[i+128]);
	}
	for(i=0;i<256;++i)
	{
		printf("\t{0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x}%s",
			charfont[i][0],
			charfont[i][1],
			charfont[i][2],
			charfont[i][3],
			charfont[i][4],
			charfont[i][5],
			charfont[i][6],
			charfont[i][7],
			i<255 ? "," : "");
		printf("\t// %d\n",i);
	}
	printf("};\n#endif\n");
}

