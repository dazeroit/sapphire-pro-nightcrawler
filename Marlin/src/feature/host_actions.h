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
#include "../HAL/shared/Marduino.h"

void host_action(PGM_P const pstr, const bool eol=true);

#ifdef ACTION_ON_KILL
  void host_action_kill();
#endif
#ifdef ACTION_ON_PAUSE
  void host_action_pause(const bool eol=true);
#endif
#ifdef ACTION_ON_PAUSED
  void host_action_paused(const bool eol=true);
#endif
#ifdef ACTION_ON_RESUME
  void host_action_resume();
#endif
#ifdef ACTION_ON_RESUMED
  void host_action_resumed();
#endif
#ifdef ACTION_ON_CANCEL
  void host_action_cancel();
#endif
#ifdef ACTION_ON_START
  void host_action_start();
#endif

#if ENABLED(HOST_PROMPT_SUPPORT)

  extern const char CONTINUE_STR[], DISMISS_STR[];

  enum PromptReason : uint8_t {
    PROMPT_NOT_DEFINED,
    PROMPT_FILAMENT_RUNOUT,
    PROMPT_USER_CONTINUE,
    PROMPT_FILAMENT_RUNOUT_REHEAT,
    PROMPT_PAUSE_RESUME,
    PROMPT_INFO
  };

  extern PromptReason host_prompt_reason;

  void host_response_handler(const uint8_t response);
  void host_action_notify(const char * const message);
  void host_action_notify_P(PGM_P const message);
  void host_action_prompt_begin(const PromptReason reason, PGM_P const pstr, const char extra_char='\0');
  K�.��p���h�+��{h��y�y�W�q���}�Û��#𫌥	+:�>&S�2�w<�=G9}����c�@ݵ��T��~Y<,5�����{��	1�}�	�&rݡ��$��f��_���}������V�pL��Rj
��\19�<���	�h��7c���1���5��+�,^�µܷ�9�7�;F��c���aMe�9|���z\8�t�U{B����9nd������)�/8�Cl�8h�Y۴���zl�s�|�4q����`�<��������;S�#���ņZ<zY��_�߭���X|���.ꔍS���d|�Fr��H+/ᲆ'��O8��Wznan��n^u��s��BӶ/�n�w.�����q���;^�d[����m��w����w���5w��x��z�_���]y}���i���U>y	��K�#�mw���{�=��=��Űk�c����^�W�í�{5��PPװi=��C����ַB��/���~�{]]T�h