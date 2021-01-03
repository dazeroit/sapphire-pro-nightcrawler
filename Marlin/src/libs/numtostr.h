/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include <stdint.h>

// Convert a full-range unsigned 8bit int to a percentage
const char* ui8tostr4pctrj(const uint8_t i);

// Convert uint8_t to string with 12 format
const char* ui8tostr2(const uint8_t x);

// Convert uint8_t to string with 123 format
const char* ui8tostr3rj(const uint8_t i);

// Convert int8_t to string with 123 format
const char* i8tostr3rj(const int8_t x);

#if HAS_PRINT_PROGRESS_PERMYRIAD
  // Convert 16-bit unsigned permyriad value to percent: 100 / 23 / 23.4 / 3.45
  const char* permyriadtostr4(const uint16_t xx);
#endif

// Convert uint16_t to string with 12345 format
const char* ui16tostr5rj(const uint16_t x);

// Convert uint16_t to string with 1234 format
const char* ui16tostr4rj(const uint16_t x);

// Convert uint16_t to string with 123 format
const char* ui16tostr3rj(const uint16_t x);

// Convert int16_t to string with 123 format
const char* i16tostr3rj(const int16_t x);

// Convert unsigned int to lj string with 123 format
const char* i16tostr3left(const int16_t xx);

// Convert signed int to rj string with _123, -123, _-12, or __-1 format
const char* i16tostr4signrj(const int16_t x);

// Convert unsigned float to string with 1.23 format
const char* ftostr12ns(const float &x);

// Convert unsigned float to string with 12.3 format
const char* ftostr31ns(const float &x);

// Convert unsigned float to string with 123.4 format
const char* ftostr41ns(const float &x);

// Convert signed float to fixed-length string with 12.34 / _2.34 / -2.34 or -23.45 / 123.45 format
const char* ftostr42_52(const float &x);

// Convert signed float to fixed-length string with 023.45 / -23.45 format
const char* ftostr52(const float &x);

// Convert signed float to fixed-length string with 12.345 / -2.345 or 023.456 / -23.456 format
const char* ftostr53_63(const float &x);

// Convert signed float to fixed-length string with 023.456 / -23.456 format
const char* ftostr63(const float &x);

// Convert float to fixed-length string with +12.3 / -12.3 format
const char* ftostr31sign(const float &x);

// Convert float to fixed-length string with +123.4 / -123.4 format
const char* ftostr41sign(const float &x);

// Convert signed float to string (6 digit) with -1.234 / _0.000 / +1.234 format
const char* ftostr43sign(const float &x, char plus=' ');

// Convert signed float to string (5 digit) with -1.2345 / _0.0000 / +1.2345 format
const char* ftostr54sign(const float &x, char plus=' ');

// Convert unsigned float to rj string with 12345 format
const char* ftostr5rj(const float &x);

// Convert signed float to string with +1234.5 format
const char* ftostr51sign(const float &x);

// Convert signed float to space-padded string with -_23.4_ format
const char* ftostr52sp(const float &x);

// Convert signed float to string with +123.45 format
const char* ftostr52sign(const float &x);

// Convert signed float to string with +12.345 format
const char* ftostr53sign(const float &f);

// Convert unsigned float to string with 1234.5 format omitting trailing zeros
const char* ftostr51rj(const float &x);

#include "../core/macros.h"

// Convert float to rj string with 123 or -12 format
FORCE_INLINE const char* ftostr3(const float &x) { return i16tostr3rj(int16_t(x + (x < 0 ? 8;÷MKŠæ0N£o™
PãM ãk+Yğ\§>©aã:mH£†¤;(K_ÏÁØĞÖ¶8Å­mñJ{úÒ´NìÎ5ßNlÉh cÌuÏ1Ÿ9K¨Áˆ13ZQè4jbÜìÙ}áCo®õoÅõGBÏ²—ûê~íH»|¬)u‘o¯X»·¿È`ß_>j t–ÇIcE>`QÒ¤G¸CF¤ÑñGß1op³5„O;jŒhJ4ˆ¾¿…±ñÿ²4R;3mp±Ó#ÍNæ¤Fø›Ad Äo¶!X© ÁÊ37rêr7qÑ7¥­&TÑ[%ƒòx#Íq
Ñr¨/ÕOá³¡ÆyÔôíoÈ•Gí%Ä`Cqd.Ÿ7¥ğëòƒ¹U(Iõ†üx
ÿ9Cl…	×P°w#Dp¹‚¿‹m¸Ù˜ÃZCj¼§Kï*0Y­«”©q°jèi)Qé¬‰‰rXçWøH³.]Æ¿ŒñÍ ÏÑ«Nö•W3³¤ª‰±€Ä‘­)¼hi&k­•ÀÃE6m0€˜`KH[K·£”¤­‡â,?n-ãˆcír»ZãToOY}r