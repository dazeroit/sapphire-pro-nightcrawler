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
// TRIANGLELAB CLONE T-D500
// R25 = 2.5 MOhm, beta25 = 4500 K, 4.7 kOhm pull-up, DyzeDesign 500 °C Thermistor
const temp_entry_t temptable_66[] PROGMEM = {
  { OV( 0), 500 },
  { OV( 0.0020), 490 },
  { OV( 0.0042), 480 },
  { OV( 0.0068), 470 },
  { OV( 0.0098), 460 },
  { OV( 0.01), 450 },
  //{ OV(  0.01), 440 },
  //{ OV( 0.02), 430 },
  { OV( 0.02), 420 },
  //{ OV( 0.03), 410 },
  { OV( 0.03), 400 },
  { OV( 0.04), 390 },
  { OV( 0.05), 380 },
  { OV( 0.06), 370 },
  { OV( 0.07), 360 },
  { OV( 0.09), 350 },
  { OV( 0.10), 340 },
  { OV( 0.12), 330 },
  { OV( 0.15), 320 },
  { OV( 0.18), 310 },
  { OV( 0.21), 300 },
  { OV( 0.26), 290 },
  { OV( 0.31), 280 },
  { OV( 0.38), 270 },
  { OV( 0.46), 260 },
  { OV( 0.56), 250 },
  { OV( 0.69), 240 },
  { OV( 0.86), 230 },
  { OV( 1.07), 220 },
  { OV( 1.35), 210 },
  { OV( 1.71), 200 },
  { OV( 2.18), 190 },
  { OV( 2.82), 180 },
  { OV( 3.66), 170 },
  { OV( 4.82), 160 },
  { OV( 6.40), 150 },
  { OV( 8.60), 140 },
  { OV( 11.71), 130 },
  { OV( 16.13), 120 },
  { OV( 22.56), 110 },
  { OV( 31.98), 100 },
  { OV(  1023),  25 }
};

