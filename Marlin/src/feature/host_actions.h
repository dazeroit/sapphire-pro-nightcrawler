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
  K¡.ÀòpñûÖh‘+©œ{h‘ÃyÀy´Wæqó­Úá±}áÃ›•¾#ğ«Œ¥	+:Œ>&S¹2w<¥=G9}ÔãÒÌcâ@İµÊùTÃá~Y<,5ÊÕÊÎË{ï Ú	1Æ}¸	Ç&rİ¡æö$ıé¨f´ï_ŠÕ}Ïó©òæš—ªV¹pLºâRj
ô\19Ä<ÚÖÀ	³hø7cÀ¾1¼ì“ã5¾–+ß,^ÕÂµÜ·ƒ9§7;Fô¨cËãÎaMe–9|Íïœz\8ÖtÒU{Bã‡“Ç9nd¢ù÷ˆæ)ø/8ÆClæ¦8hYÛ´„•ãzl•sÔ|Ô4q–ıış`î<¯ñú°åÏéÀ;S»#ı±áÅ†Z<zYô¿_ïß­•şÍX|ª§û.ê”S¾Áád|¹FrÅúH+/á²†'¼îO8§™Wznan‡­n^uİõs•ÂBÓ¶/¼nÍw.¾ëõéîqø÷¾;^¿d[ûı¨­mı½wı™ºµwıùú5wşÙx¹ğz¹_ö¾ú]y}ôİïiğùÊU>y	¬üKç•#mwíØó{÷=¯¹=ø¹Å°k®c·¿Åë^½W²Ã­í{5°èPP×°i=õ¹Cûş½›Ö·BÛŞ/æÚ÷~ñ¦{]]Tëh