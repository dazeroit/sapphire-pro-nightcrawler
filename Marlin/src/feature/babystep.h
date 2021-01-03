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

#include "../inc/MarlinConfigPre.h"

#if ENABLED(INTEGRATED_BABYSTEPPING)
  #define BABYSTEPS_PER_SEC 1000UL
  #define BABYSTEP_TICKS ((STEPPER_TIMER_RATE) / (BABYSTEPS_PER_SEC))
#else
  #define BABYSTEPS_PER_SEC 976UL
  #define BABYSTEP_TICKS ((TEMP_TIMER_RATE) / (BABYSTEPS_PER_SEC))
#endif

#if IS_CORE || EITHER(BABYSTEP_XY, I2C_POSITION_ENCODERS)
  #define BS_AXIS_IND(A) A
  #define BS_AXIS(I) AxisEnum(I)
#else
  #define BS_AXIS_IND(A) 0
  #define BS_AXIS(I) Z_AXIS
#endif

#if ENABLED(BABYSTEP_DISPLAY_TOTAL)
  #if ENABLED(BABYSTEP_XY)
    #define BS_TOTAL_IND(A) A
  #else
    #define BS_TOTAL_IND(A) 0
  #endif
#endif

class Babystep {
public:
  static volatile int16_t steps[BS_AXIS_IND(Z_AXIS) + 1];
  static int16_t accum;                                     // Total babysteps in current edit

  #if ENABLED(BABYSTEP_DISPLAY_TOTAL)
    static int16_t axis_total[BS_TOTAL_IND(Z_AXIS) + 1];   // Total babysteps since G28
    static inline void reset_total(const AxisEnum axis) {
      if (TERN1(BABYSTEP_XY, axis == Z_AXIS))
        axis_total[BS_TOTAL_IND(axis)] = 0;
    }
  #endif

  static void add_steps(const AxisEnum axis, const int16_t distance);
  st���^�/r%�S8�<��Jf���g�ji�͔>�|��ixϐ��X�/�����WN�8cU�g&�L�<p,�:��8������ձ���F���d�������ޗ��q��q� ��SVO�m�������p_����uʞT�>F���a�c`y��
>�>o%�YN��O�n1�0-�',ϲ��H��UΒ[��=�<�/��5��"M��[N�?3<e>͆�ȩ%?�06�io���"XWS�ڵZ��u<f�Ŏ׼����}��<q-��%�o��P�Q�^�{�8��g����S]b>�w7�i'���:{<�y_�<��Lo]�%pl���QYw�]��=izd�.<{���������۸y)�Cn�sM��r�Z���W�a��ߙ��R��"��^���,L~	'_z�җ�1������W��/
+��딯�Y�S�|ݵ����0�{�`�G��-�}�v�@�Gix[G�u��jZK�U