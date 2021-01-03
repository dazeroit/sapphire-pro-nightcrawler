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

#include "../inc/MarlinConfig.h"

#if ENABLED(BABYSTEPPING)

#include "babystep.h"
#include "../MarlinCore.h"
#include "../module/motion.h"   // for axes_should_home()
#include "../module/planner.h"  // for axis_steps_per_mm[]
#include "../module/stepper.h"

#if ENABLED(BABYSTEP_ALWAYS_AVAILABLE)
  #include "../gcode/gcode.h"
#endif

Babystep babystep;

volatile int16_t Babystep::steps[BS_AXIS_IND(Z_AXIS) + 1];
#if ENABLED(BABYSTEP_DISPLAY_TOTAL)
  int16_t Babystep::axis_total[BS_TOTAL_IND(Z_AXIS) + 1];
#endif
int16_t Babystep::accum;

void Babystep::step_axis(const AxisEnum axis) {
  const int16_t curTodo = steps[BS_AXIS_IND(axis)]; // get rid of volatile for performance
  if (curTodo) {
    stepper.do_babystep((AxisEnum)axis, curTodo > 0);
    if (curTodo > 0) steps[BS_AXIS_IND(axis)]--; else steps[BS_AXIS_IND(axis)]++;
  }
}

void Babystep::add_mm(const AxisEnum axis, const float &mm) {
  add_steps(axis, mm * planner.settings.axis_steps_per_mm[axis]);
}

void Babystep::add_steps(const AxisEnum axis, const int16_t distance) {
  if (DISABLED(BABYSTEP_WITHOUT_HOMING) && axes_should_home(_BV(axis))) return;

  accum += distance; // Count up babysteps for the UI
  stepò£6vüÖü}Hàeq€cÒû9`•‘ÆJÃ†¨ŠmA¿Žù;Ä>!À9ÃÍQ)Ñ¡V;²ÕÿúBß²å¾fžŠ"nl$Û›@º¹ ¹M é)½à²ÐcúS1–)ýØ:|Äð°I”–?’ïŒ6VKB3¼ß\üú¾]a¼žj˜oÿ™£Q	á›àÜX“OÞží0Ò°Ÿç‹‡ÿã§>ÿçßOüëÆ—^¯ÜüŸÿ<ûqÓ±híJcÓ¢6ð«ÔKsŒ?1Ë~e~t}¥Æîæ¯ÚÅ³¯(‰+hYéZÀÚ¶@wøì½KÛ‘¡Áü{èûf©º|¾^å0TCä
è_§çK¢µâãÅçw”åðü1É1A[ô