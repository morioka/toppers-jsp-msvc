;
;  TOPPERS/JSP Kernel
;      Toyohashi Open Platform for Embedded Real-Time Systems/
;      Just Standard Profile Kernel
;
;  Copyright (C) 2000-2004 by Embedded and Real-Time Systems Laboratory
;                              Toyohashi Univ. of Technology, JAPAN
;  Copyright (C) 2001-2007 by Industrial Technology Institute,
;                              Miyagi Prefectural Government, JAPAN
;  Copyright (C) 2001-2004 by Dep. of Computer Science and Engineering
;                   Tomakomai National College of Technology, JAPAN
;
;  ��L���쌠�҂́C�ȉ��� (1)�`(4) �̏������CFree Software Foundation
;  �ɂ���Č��\����Ă��� GNU General Public License �� Version 2 �ɋL
;  �q����Ă�������𖞂����ꍇ�Ɍ���C�{�\�t�g�E�F�A�i�{�\�t�g�E�F�A
;  �����ς������̂��܂ށD�ȉ������j���g�p�E�����E���ρE�Ĕz�z�i�ȉ��C
;  ���p�ƌĂԁj���邱�Ƃ𖳏��ŋ�������D
;  (1) �{�\�t�g�E�F�A���\�[�X�R�[�h�̌`�ŗ��p����ꍇ�ɂ́C��L�̒���
;      ���\���C���̗��p��������щ��L�̖��ۏ؋K�肪�C���̂܂܂̌`�Ń\�[
;      �X�R�[�h���Ɋ܂܂�Ă��邱�ƁD
;  (2) �{�\�t�g�E�F�A���C���C�u�����`���ȂǁC���̃\�t�g�E�F�A�J���Ɏg
;      �p�ł���`�ōĔz�z����ꍇ�ɂ́C�Ĕz�z�ɔ����h�L�������g�i���p
;      �҃}�j���A���Ȃǁj�ɁC��L�̒��쌠�\���C���̗��p��������щ��L
;      �̖��ۏ؋K����f�ڂ��邱�ƁD
;  (3) �{�\�t�g�E�F�A���C�@��ɑg�ݍ��ނȂǁC���̃\�t�g�E�F�A�J���Ɏg
;      �p�ł��Ȃ��`�ōĔz�z����ꍇ�ɂ́C���̂����ꂩ�̏����𖞂�����
;      �ƁD
;    (a) �Ĕz�z�ɔ����h�L�������g�i���p�҃}�j���A���Ȃǁj�ɁC��L�̒�
;        �쌠�\���C���̗��p��������щ��L�̖��ۏ؋K����f�ڂ��邱�ƁD
;    (b) �Ĕz�z�̌`�Ԃ��C�ʂɒ�߂���@�ɂ���āCTOPPERS�v���W�F�N�g��
;        �񍐂��邱�ƁD
;  (4) �{�\�t�g�E�F�A�̗��p�ɂ�蒼�ړI�܂��͊ԐړI�ɐ����邢���Ȃ鑹
;      �Q������C��L���쌠�҂����TOPPERS�v���W�F�N�g��Ɛӂ��邱�ƁD
;
;  �{�\�t�g�E�F�A�́C���ۏ؂Œ񋟂���Ă�����̂ł���D��L���쌠�҂�
;  ���TOPPERS�v���W�F�N�g�́C�{�\�t�g�E�F�A�Ɋւ��āC���̓K�p�\����
;  �܂߂āC�����Ȃ�ۏ؂��s��Ȃ��D�܂��C�{�\�t�g�E�F�A�̗��p�ɂ�蒼
;  �ړI�܂��͊ԐړI�ɐ����������Ȃ鑹�Q�Ɋւ��Ă��C���̐ӔC�𕉂�Ȃ��D
;
;  @(#) $Id: sys_config.inc,v 1.2 2007/03/23 07:59:26 honda Exp $
;

 .AIFDEF _SYS_CONFIG_INC_
 .AELSE

_SYS_CONFIG_INC_: .DEFINE ""

        .INCLUDE "user_config.inc"
        .INCLUDE "h8s2339f.inc"

;
; �������W�X�^�̃A�h���X�̏��2�o�C�g
;�@�@CPU���샂�[�h�ɂ��A�h���X��Ԃ��قȂ�B
;
H8S_BASE_ADDR:          .DEFINE         "H'ff0000"

;
; sil_dly_nse_longs�ŗp����萔
; 

 .AIFDEF RAM        ;�@�f�o�b�O����RAM��Ŏ��s����ꍇ
SIL_DLY_TIM1:           .DEFINE         "3630"
SIL_DLY_TIM2:           .DEFINE          "640"

 .AELSE             ;�@ROM���̏ꍇ

SIL_DLY_TIM1:           .DEFINE         "1950"
SIL_DLY_TIM2:           .DEFINE          "200"

 .AENDI ;  RAM

; �n�[�h�E�F�A�������֐��̐擪�A�h���X
HARDWARE_INIT_HOOK:     .DEFINE         "_hardware_init_hook"

; �\�t�g�E�F�A���i���Ƀ��C�u�����́j�������֐��̐擪�A�h���X
; �@�g�p����ꍇ�̓R�����g���O��
; SOFTWARE_INIT_HOOK:   .DEFINE         "_software_init_hook"

 .AENDI ;  _SYS_CONFIG_INC_
