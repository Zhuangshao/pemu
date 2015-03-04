static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x009C,
  [0x05] = 0x0009,
  [0x06] = 0x0086,
  [0x07] = 0x007F,
  [0x08] = 0x0097,
  [0x09] = 0x008D,
  [0x0a] = 0x008E,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x009D,
  [0x15] = 0x0085,
  [0x16] = 0x0008,
  [0x17] = 0x0087,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x0092,
  [0x1b] = 0x008F,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x20] = 0x0080,
  [0x21] = 0x0081,
  [0x22] = 0x0082,
  [0x23] = 0x0083,
  [0x24] = 0x0084,
  [0x25] = 0x000A,
  [0x26] = 0x0017,
  [0x27] = 0x001B,
  [0x28] = 0x0088,
  [0x29] = 0x0089,
  [0x2a] = 0x008A,
  [0x2b] = 0x008B,
  [0x2c] = 0x008C,
  [0x2d] = 0x0005,
  [0x2e] = 0x0006,
  [0x2f] = 0x0007,
  [0x30] = 0x0090,
  [0x31] = 0x0091,
  [0x32] = 0x0016,
  [0x33] = 0x0093,
  [0x34] = 0x0094,
  [0x35] = 0x0095,
  [0x36] = 0x0096,
  [0x37] = 0x0004,
  [0x38] = 0x0098,
  [0x39] = 0x0099,
  [0x3a] = 0x009A,
  [0x3b] = 0x009B,
  [0x3c] = 0x0014,
  [0x3d] = 0x0015,
  [0x3e] = 0x009E,
  [0x3f] = 0x001A,
  [0x40] = 0x0020,
  [0x41] = 0x3002,
  [0x42] = 0x300C,
  [0x43] = 0x300D,
  [0x44] = 0x3001,
  [0x45] = 0x30FB,
  [0x46] = 0x30F2,
  [0x47] = 0x30A1,
  [0x48] = 0x30A3,
  [0x49] = 0x30A5,
  [0x4a] = 0x00A3,
  [0x4b] = 0x002E,
  [0x4c] = 0x003C,
  [0x4d] = 0x0028,
  [0x4e] = 0x002B,
  [0x4f] = 0x007C,
  [0x50] = 0x0026,
  [0x51] = 0x30A7,
  [0x52] = 0x30A9,
  [0x53] = 0x30E3,
  [0x54] = 0x30E5,
  [0x55] = 0x30E7,
  [0x56] = 0x30C3,
  [0x58] = 0x30FC,
  [0x5a] = 0x0021,
  [0x5b] = 0x00A5,
  [0x5c] = 0x002A,
  [0x5d] = 0x0029,
  [0x5e] = 0x003B,
  [0x5f] = 0x00AC,
  [0x60] = 0x002D,
  [0x61] = 0x002F,
  [0x6a] = 0x00A6,
  [0x6b] = 0x002C,
  [0x6c] = 0x0025,
  [0x6d] = 0x005F,
  [0x6e] = 0x003E,
  [0x6f] = 0x003F,
  [0x79] = 0x0060,
  [0x7a] = 0x003A,
  [0x7b] = 0x0023,
  [0x7c] = 0x0040,
  [0x7d] = 0x0027,
  [0x7e] = 0x003D,
  [0x7f] = 0x0022,
  [0x81] = 0x30A2,
  [0x82] = 0x30A4,
  [0x83] = 0x30A6,
  [0x84] = 0x30A8,
  [0x85] = 0x30AA,
  [0x86] = 0x30AB,
  [0x87] = 0x30AD,
  [0x88] = 0x30AF,
  [0x89] = 0x30B1,
  [0x8a] = 0x30B3,
  [0x8c] = 0x30B5,
  [0x8d] = 0x30B7,
  [0x8e] = 0x30B9,
  [0x8f] = 0x30BB,
  [0x90] = 0x30BD,
  [0x91] = 0x30BF,
  [0x92] = 0x30C1,
  [0x93] = 0x30C4,
  [0x94] = 0x30C6,
  [0x95] = 0x30C8,
  [0x96] = 0x30CA,
  [0x97] = 0x30CB,
  [0x98] = 0x30CC,
  [0x99] = 0x30CD,
  [0x9a] = 0x30CE,
  [0x9d] = 0x30CF,
  [0x9e] = 0x30D2,
  [0x9f] = 0x30D5,
  [0xa1] = 0x203E,
  [0xa2] = 0x30D8,
  [0xa3] = 0x30DB,
  [0xa4] = 0x30DE,
  [0xa5] = 0x30DF,
  [0xa6] = 0x30E0,
  [0xa7] = 0x30E1,
  [0xa8] = 0x30E2,
  [0xa9] = 0x30E4,
  [0xaa] = 0x30E6,
  [0xac] = 0x30E8,
  [0xad] = 0x30E9,
  [0xae] = 0x30EA,
  [0xaf] = 0x30EB,
  [0xba] = 0x30EC,
  [0xbb] = 0x30ED,
  [0xbc] = 0x30EF,
  [0xbd] = 0x30F3,
  [0xbe] = 0x309B,
  [0xbf] = 0x309C,
  [0xc1] = 0x0041,
  [0xc2] = 0x0042,
  [0xc3] = 0x0043,
  [0xc4] = 0x0044,
  [0xc5] = 0x0045,
  [0xc6] = 0x0046,
  [0xc7] = 0x0047,
  [0xc8] = 0x0048,
  [0xc9] = 0x0049,
  [0xd1] = 0x004A,
  [0xd2] = 0x004B,
  [0xd3] = 0x004C,
  [0xd4] = 0x004D,
  [0xd5] = 0x004E,
  [0xd6] = 0x004F,
  [0xd7] = 0x0050,
  [0xd8] = 0x0051,
  [0xd9] = 0x0052,
  [0xe0] = 0x0024,
  [0xe2] = 0x0053,
  [0xe3] = 0x0054,
  [0xe4] = 0x0055,
  [0xe5] = 0x0056,
  [0xe6] = 0x0057,
  [0xe7] = 0x0058,
  [0xe8] = 0x0059,
  [0xe9] = 0x005A,
  [0xf0] = 0x0030,
  [0xf1] = 0x0031,
  [0xf2] = 0x0032,
  [0xf3] = 0x0033,
  [0xf4] = 0x0034,
  [0xf5] = 0x0035,
  [0xf6] = 0x0036,
  [0xf7] = 0x0037,
  [0xf8] = 0x0038,
  [0xf9] = 0x0039,
  [0xff] = 0x009F,
};
static const struct gap from_idx[] = {
  { .start = 0x0000, .end = 0x0060, .idx =     0 },
  { .start = 0x007c, .end = 0x00ac, .idx =   -27 },
  { .start = 0x203e, .end = 0x203e, .idx = -8108 },
  { .start = 0x3001, .end = 0x3002, .idx = -12142 },
  { .start = 0x300c, .end = 0x300d, .idx = -12151 },
  { .start = 0x309b, .end = 0x30f3, .idx = -12292 },
  { .start = 0x30fb, .end = 0x30fc, .idx = -12299 },
  { .start = 0xffff, .end = 0xffff, .idx =     0 }
};
static const char from_ucs4[] = {

  '\x00', '\x01', '\x02', '\x03', '\x37', '\x2d', '\x2e', '\x2f',
  '\x16', '\x05', '\x25', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x3c', '\x3d', '\x32', '\x26',
  '\x18', '\x19', '\x3f', '\x27', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x40', '\x5a', '\x7f', '\x7b', '\xe0', '\x6c', '\x50', '\x7d',
  '\x4d', '\x5d', '\x5c', '\x4e', '\x6b', '\x60', '\x4b', '\x61',
  '\xf0', '\xf1', '\xf2', '\xf3', '\xf4', '\xf5', '\xf6', '\xf7',
  '\xf8', '\xf9', '\x7a', '\x5e', '\x4c', '\x7e', '\x6e', '\x6f',
  '\x7c', '\xc1', '\xc2', '\xc3', '\xc4', '\xc5', '\xc6', '\xc7',
  '\xc8', '\xc9', '\xd1', '\xd2', '\xd3', '\xd4', '\xd5', '\xd6',
  '\xd7', '\xd8', '\xd9', '\xe2', '\xe3', '\xe4', '\xe5', '\xe6',
  '\xe7', '\xe8', '\xe9', '\x00', '\x00', '\x00', '\x00', '\x6d',
  '\x79', '\x4f', '\x00', '\x00', '\x07', '\x20', '\x21', '\x22',
  '\x23', '\x24', '\x15', '\x06', '\x17', '\x28', '\x29', '\x2a',
  '\x2b', '\x2c', '\x09', '\x0a', '\x1b', '\x30', '\x31', '\x1a',
  '\x33', '\x34', '\x35', '\x36', '\x08', '\x38', '\x39', '\x3a',
  '\x3b', '\x04', '\x14', '\x3e', '\xff', '\x00', '\x00', '\x00',
  '\x4a', '\x00', '\x5b', '\x6a', '\x00', '\x00', '\x00', '\x00',
  '\x00', '\x5f', '\xa1', '\x44', '\x41', '\x42', '\x43', '\xbe',
  '\xbf', '\x00', '\x00', '\x00', '\x00', '\x47', '\x81', '\x48',
  '\x82', '\x49', '\x83', '\x51', '\x84', '\x52', '\x85', '\x86',
  '\x00', '\x87', '\x00', '\x88', '\x00', '\x89', '\x00', '\x8a',
  '\x00', '\x8c', '\x00', '\x8d', '\x00', '\x8e', '\x00', '\x8f',
  '\x00', '\x90', '\x00', '\x91', '\x00', '\x92', '\x00', '\x56',
  '\x93', '\x00', '\x94', '\x00', '\x95', '\x00', '\x96', '\x97',
  '\x98', '\x99', '\x9a', '\x9d', '\x00', '\x00', '\x9e', '\x00',
  '\x00', '\x9f', '\x00', '\x00', '\xa2', '\x00', '\x00', '\xa3',
  '\x00', '\x00', '\xa4', '\xa5', '\xa6', '\xa7', '\xa8', '\x53',
  '\xa9', '\x54', '\xaa', '\x55', '\xac', '\xad', '\xae', '\xaf',
  '\xba', '\xbb', '\x00', '\xbc', '\x00', '\x00', '\x46', '\xbd',
  '\x45', '\x58',
};
