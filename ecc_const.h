/*
 * Copyright (C) 2010 mbelib Author
 * GPG Key ID: 0xEA5EFE2C (9E7A 5527 9CDC EBF7 BF1B  D772 4F98 E863 EA5E FE2C)
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * constants for ecc.c
 */
#ifndef _ECC_H
#define _ECC_H

const unsigned int hammingGenerator[4] = {
  0x7f08, 0x78e4, 0x66d2, 0x55b1
};

const unsigned int golayGenerator[12] = {
  0x63a, 0x31d, 0x7b4, 0x3da, 0x1ed, 0x6cc, 0x366, 0x1b3, 0x6e3, 0x54b, 0x49f, 0x475
};

const unsigned int golayMatrix[2048] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 2084, 0, 0, 0, 769, 0, 1024, 144,
  2, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 72, 0, 72, 72, 72, 0, 0, 0, 16, 0, 1, 1538, 384, 0, 134, 2048, 1056, 288,
  2576, 5, 72, 0, 0, 0, 0, 0, 0, 0, 1280, 0, 0, 0, 4, 0, 546, 144, 2049, 0, 0, 0, 66, 0, 1, 144, 520, 0, 2056, 144,
  1056, 144, 324, 144, 144, 0, 0, 0, 2688, 0, 1, 32, 22, 0, 272, 3, 1056, 3076, 128, 768, 72, 0, 1, 268, 1056, 1, 1, 2112, 1, 576,
  1056, 1056, 1056, 10, 1, 144, 1056, 0, 0, 0, 0, 0, 0, 0, 1280, 0, 0, 0, 160, 0, 21, 2560, 2, 0, 0, 0, 16, 0, 704, 9,
  2, 0, 2056, 1092, 2, 288, 2, 2, 2, 0, 0, 0, 16, 0, 2050, 132, 545, 0, 1536, 3, 2308, 288, 128, 1040, 72, 0, 16, 16, 16, 288,
  1036, 2112, 16, 288, 65, 648, 16, 288, 288, 288, 2, 0, 0, 0, 1280, 0, 1280, 1280, 1280, 0, 2056, 3, 592, 64, 128, 44, 1280, 0, 2056, 544,
  133, 6, 48, 2112, 1280, 2056, 2056, 256, 2056, 1537, 2056, 144, 2, 0, 100, 3, 8, 536, 128, 2112, 1280, 3, 128, 3, 3, 128, 128, 3, 128, 1152,
  770, 2112, 16, 2112, 1, 2112, 2112, 20, 2056, 3, 1056, 288, 128, 2112, 516, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 4, 0, 1024, 2560,
  304, 0, 0, 0, 16, 0, 1024, 320, 520, 0, 1024, 42, 2240, 1024, 1024, 5, 1024, 0, 0, 0, 16, 0, 772, 32, 3072, 0, 2081, 1408, 514, 18,
  128, 5, 72, 0, 16, 16, 16, 2184, 98, 5, 16, 576, 264, 5, 16, 5, 1024, 5, 5, 0, 0, 0, 4, 0, 2128, 32, 520, 0, 4, 4,
  4, 265, 128, 1090, 4, 0, 416, 3073, 520, 6, 520, 520, 520, 576, 19, 256, 4, 2080, 1024, 144, 520, 0, 1034, 32, 321, 32, 128, 32, 32, 576,
  128, 2072, 4, 128, 128, 32, 128, 576, 2052, 130, 16, 1296, 1, 32, 520, 576, 576, 576, 1056, 576, 128, 5, 2306, 0, 0, 0, 16, 0, 40, 2560,
  68, 0, 322, 2560, 1033, 2560, 128, 2560, 2560, 0, 16, 16, 16, 6, 2305, 1184, 16, 129, 548, 256, 16, 88, 1024, 2560, 2, 0, 16, 16, 16, 1089,
  128, 266, 16, 12, 128, 96, 16, 128, 128, 2560, 128, 16, 16, 16, 16, 512, 16, 16, 16, 3074, 16, 16, 16, 288, 128, 5, 16, 0, 513, 200,
  2082, 6, 128, 17, 1280, 1072, 128, 256, 4, 128, 128, 2560, 128, 6, 1088, 256, 16, 6, 6, 6, 520, 256, 2056, 256, 256, 6, 128, 256, 97, 2304,
  128, 1540, 16, 128, 128, 32, 128, 128, 128, 3, 128, 128, 128, 128, 128, 41, 16, 16, 16, 6, 128, 2112, 16, 576, 128, 256, 16, 128, 128, 1032,
  128, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 160, 0, 1024, 262, 2049, 0, 0, 0, 66, 0, 1024, 9, 384, 0, 1024, 2048, 28, 1024,
  1024, 608, 1024, 0, 0, 0, 1029, 0, 2050, 32, 384, 0, 272, 2048, 514, 641, 36, 1040, 72, 0, 552, 2048, 384, 84, 384, 384, 384, 2048, 65, 2048,
  2048, 10, 1024, 2048, 384, 0, 0, 0, 66, 0, 140, 32, 2049, 0, 272, 1544, 2049, 64, 2049, 2049, 2049, 0, 66, 66, 66, 2816, 48, 1028, 66, 37,
  640, 256, 66, 10, 1024, 144, 2049, 0, 272, 32, 8, 32, 1600, 32, 32, 272, 272, 196, 272, 10, 272, 32, 2049, 1152, 2052, 529, 66, 10, 1, 32,
  384, 10, 272, 2048, 1056, 10, 10, 10, 516, 0, 0, 0, 160, 0, 2050, 9, 68, 0, 160, 160, 160, 64, 776, 1040, 160, 0, 260, 9, 3584, 9,
  48, 9, 9, 530, 65, 256, 160, 2180, 1024, 9, 2, 0, 2050, 832, 8, 2050, 2050, 1040, 2050, 12, 65, 1040, 160, 1040, 2050, 1040, 1040, 1152, 65, 38,
  16, 512, 2050, 9, 384, 65, 65, 2048, 65, 288, 65, 1040, 516, 0, 513, 2068, 8, 64, 48, 642, 1280, 64, 1030, 256, 160, 64, 64, 64, 2049, 1152,
  48, 256, 66, 48, 48, 9, 48, 256, 2056, 256, 256, 64, 48, 256, 516, 1152, 8, 8, 8, 261, 2050, 32, 8, 2592, 272, 3, 8, 64, 128, 1040,
  516, 1152, 1152, 1152, 8, 1152, 48, 2112, 516, 1152, 65, 256, 516, 10, 516, 516, 516, 0, 0, 0, 2312, 0, 1024, 32, 68, 0, 1024, 81, 514, 1024,
  1024, 136, 1024, 0, 1024, 644, 33, 1024, 1024, 2066, 1024, 1024, 1024, 256, 1024, 1024, 1024, 1024, 1024, 0, 192, 32, 514, 32, 25, 32, 32, 12, 514, 514,
  514, 2368, 1024, 32, 514, 259, 2052, 1096, 16, 512, 1024, 32, 384, 176, 1024, 2048, 514, 1024, 1024, 5, 1024, 0, 513, 32, 1168, 32, 258, 32, 32, 2178,
  104, 256, 4, 532, 1024, 32, 2049, 24, 2052, 256, 66, 193, 1024, 32, 520, 256, 1024, 256, 256, 1024, 1024, 256, 1024, 32, 2052, 32, 32, 32, 32, 32,
  32, 1025, 272, 32, 514, 32, 128, 32, 32, 2052, 2052, 32, 2052, 32, 2052, 32, 32, 576, 2052, 256, 137, 10, 1024, 32, 80, 0, 513, 1026, 68, 400,
  68, 68, 68, 12, 2064, 256, 160, 35, 1024, 2560, 68, 2144, 138, 256, 16, 512, 1024, 9, 68, 256, 1024, 256, 256, 1024, 1024, 256, 1024, 12, 1312, 2177,
  16, 512, 2050, 32, 68, 12, 12, 12, 514, 12, 128, 1040, 257, 512, 16, 16, 16, 512, 512, 512, 16, 12, 65, 256, 16, 512, 1024, 194, 2088, 513,
  513, 256, 513, 3080, 513, 32, 68, 256, 513, 256, 256, 64, 128, 256, 26, 256, 513, 256, 256, 6, 48, 256, 2176, 256, 256, 256, 256, 256, 1024, 256,
  256, 82, 513, 32, 8, 32, 128, 32, 32, 12, 128, 256, 3136, 128, 128, 32, 128, 1152, 2052, 256, 16, 512, 328, 32, 1027, 256, 34, 256, 256, 2065,
  128, 256, 516, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 4, 0, 2432, 1057, 2, 0, 0, 0, 1160, 0, 1, 320, 2, 0, 112, 2048,
  2, 524, 2, 2, 2, 0, 0, 0, 290, 0, 1, 132, 3072, 0, 1536, 2048, 145, 18, 36, 768, 72, 0, 1, 2048, 580, 1, 1, 56, 1, 2048,
  264, 2048, 2048, 1216, 1, 2048, 2, 0, 0, 0, 4, 0, 1, 2058, 224, 0, 4, 4, 4, 64, 1048, 768, 4, 0, 1, 544, 2320, 1, 1, 1028,
  1, 1282, 640, 73, 4, 2080, 1, 144, 2, 0, 1, 1104, 8, 1, 1, 768, 1, 168, 2114, 768, 4, 768, 1, 768, 768, 1, 1, 130, 1, 1,
  1, 1, 1, 20, 1, 2048, 1056, 1, 1, 768, 1, 0, 0, 0, 2113, 0, 40, 132, 2, 0, 1536, 280, 2, 64, 2, 2, 2, 0, 260, 544,
  2, 3088, 2, 2, 2, 129, 2, 2, 2, 2, 2, 2, 2, 0, 1536, 132, 8, 132, 336, 132, 132, 1536, 1536, 96, 1536, 2057, 1536, 132, 2, 74,
  2208, 1281, 16, 512, 1, 132, 2, 20, 1536, 2048, 2, 288, 2, 2, 2, 0, 146, 544, 8, 64, 2564, 17, 1280, 64, 289, 3200, 4, 64, 64, 64,
  2, 544, 1088, 544, 544, 392, 1, 544, 2, 20, 2056, 544, 2, 64, 2, 2, 2, 2304, 8, 8, 8, 1058, 1, 132, 8, 20, 1536, 3, 8, 64,
  128, 768, 2096, 20, 1, 544, 8, 1, 1, 2112, 1, 20, 20, 20, 448, 20, 1, 1032, 2, 0, 0, 0, 4, 0, 40, 320, 3072, 0, 4, 4,
  4, 18, 577, 136, 4, 0, 2562, 320, 33, 320, 148, 320, 320, 129, 264, 1552, 4, 2080, 1024, 320, 2, 0, 192, 521, 3072, 18, 3072, 3072, 3072, 18,
  264, 96, 4, 18, 18, 18, 3072, 1060, 264, 130, 16, 512, 1, 320, 3072, 264, 264, 2048, 264, 18, 264, 5, 672, 0, 4, 4, 4, 1664, 258, 17,
  4, 4, 4, 4, 4, 2080, 4, 4, 4, 24, 1088, 130, 4, 2080, 1, 320, 520, 2080, 4, 4, 4, 2080, 2080, 2080, 4, 2304, 560, 130, 4, 76,
  1, 32, 3072, 1025, 4, 4, 4, 18, 128, 768, 4, 130, 1, 130, 130, 1, 1, 130, 1, 576, 264, 130, 4, 2080, 1, 1032, 80, 0, 40, 1026,
  896, 40, 40, 17, 40, 129, 2064, 96, 4, 1284, 40, 2560, 2, 129, 1088, 2060, 16, 512, 40, 320, 2, 129, 129, 129, 2, 129, 2, 2, 2, 2304,
  7, 96, 16, 512, 40, 132, 3072, 96, 1536, 96, 96, 18, 128, 96, 257, 512, 16, 16, 16, 512, 512, 512, 16, 129, 264, 96, 16, 512, 2116, 1032,
  2, 2304, 1088, 17, 4, 17, 40, 17, 17, 522, 4, 4, 4, 64, 128, 17, 4, 1088, 1088, 544, 1088, 6, 1088, 17, 2176, 129, 1088, 256, 4, 2080,
  784, 1032, 2, 2304, 2304, 2304, 8, 2304, 128, 17, 578, 2304, 128, 96, 4, 128, 128, 1032, 128, 2304, 1088, 130, 16, 512, 1, 1032, 292, 20, 34, 1032,
  2561, 1032, 128, 1032, 1032, 0, 0, 0, 528, 0, 528, 528, 528, 0, 11, 2048, 1344, 64, 36, 136, 528, 0, 260, 2048, 33, 162, 2120, 1028, 528, 2048,
  640, 2048, 2048, 273, 1024, 2048, 2, 0, 192, 2048, 8, 1288, 36, 67, 528, 2048, 36, 2048, 2048, 36, 36, 2048, 36, 2048, 1042, 2048, 2048, 512, 1, 2048,
  384, 2048, 2048, 2048, 2048, 2048, 36, 2048, 2048, 0, 3104, 385, 8, 64, 258, 1028, 528, 64, 640, 50, 4, 64, 64, 64, 2049, 24, 640, 1028, 66, 1028,
  1, 1028, 1028, 640, 640, 2048, 640, 64, 640, 1028, 296, 518, 8, 8, 8, 2192, 1, 32, 8, 1025, 272, 2048, 8, 64, 36, 768, 1154, 352, 1, 2048,
  8, 1, 1, 1028, 1, 2048, 640, 2048, 2048, 10, 1, 2048, 80, 0, 260, 1026, 8, 64, 1153, 2336, 528, 64, 2064, 517, 160, 64, 64, 64, 2, 260,
  260, 208, 260, 512, 260, 9, 2, 1064, 260, 2048, 2, 64, 2, 2, 2, 49, 8, 8, 8, 512, 2050, 132, 8, 386, 1536, 2048, 8, 64, 36, 1040,
  257, 512, 260, 2048, 8, 512, 512, 512, 1120, 2048, 65, 2048, 2048, 512, 152, 2048, 2, 64, 8, 8, 8, 64, 64, 64, 8, 64, 64, 64, 8, 64,
  64, 64, 64, 2051, 260, 544, 8, 64, 48, 1028, 2176, 64, 640, 256, 1041, 64, 64, 64, 2, 8, 8, 8, 8, 64, 8, 8, 8, 64, 8, 8,
  8, 64, 64, 64, 8, 1152, 8, 8, 8, 512, 1, 274, 8, 20, 34, 2048, 8, 64, 3328, 161, 516, 0, 192, 1026, 33, 2053, 258, 136, 528, 800,
  2064, 136, 4, 136, 1024, 136, 136, 24, 33, 33, 33, 512, 1024, 320, 33, 70, 1024, 2048, 33, 1024, 1024, 136, 1024, 192, 192, 276, 192, 512, 192, 32,
  3072, 1025, 192, 2048, 514, 18, 36, 136, 257, 512, 192, 2048, 33, 512, 512, 512, 14, 2048, 264, 2048, 2048, 512, 1024, 2048, 80, 24, 258, 2624, 4, 258,
  258, 32, 258, 1025, 4, 4, 4, 64, 258, 136, 4, 24, 24, 24, 33, 24, 258, 1028, 2176, 24, 640, 256, 4, 2080, 1024, 515, 80, 1025, 192, 32,
  8, 32, 258, 32, 32, 1025, 1025, 1025, 4, 1025, 2568, 32, 80, 24, 2052, 130, 1792, 512, 1, 32, 80, 1025, 34, 2048, 80, 388, 80, 80, 80, 1026,
  2064, 1026, 1026, 512, 40, 1026, 68, 2064, 2064, 1026, 2064, 64, 2064, 136, 257, 512, 260, 1026, 33, 512, 512, 512, 2176, 129, 2064, 256, 584, 512, 1024, 52,
  2, 512, 192, 1026, 8, 512, 512, 512, 257, 12, 2064, 96, 257, 512, 257, 257, 257, 512, 512, 512, 16, 512, 512, 512, 512, 512, 34, 2048, 1156, 512,
  512, 512, 257, 164, 513, 1026, 8, 64, 258, 17, 2176, 64, 2064, 256, 4, 64, 64, 64, 1568, 24, 1088, 256, 2176, 512, 2176, 2176, 2176, 256, 34, 256,
  256, 64, 13, 256, 2176, 2304, 8, 8, 8, 512, 1044, 32, 8, 1025, 34, 656, 8, 64, 128, 2054, 257, 512, 34, 69, 8, 512, 512, 512, 2176, 34,
  34, 256, 34, 512, 34, 1032, 80
};

#endif
