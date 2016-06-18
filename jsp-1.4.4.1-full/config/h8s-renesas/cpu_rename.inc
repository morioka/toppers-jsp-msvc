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
;  @(#) $Id: cpu_rename.inc,v 1.2 2007/03/23 07:59:26 honda Exp $
;

 .AIFDEF _CPU_RENAME_INC_
 .AELSE

_CPU_RENAME_INC_: .DEFINE ""


;
;�@�V���{���̃��l�[��
;

;
;�@���ʕ�
;

;�@�@�@�ϐ�
_runtsk:                .DEFINE         "__kernel_runtsk"
_schedtsk:              .DEFINE         "__kernel_schedtsk"
_reqflg:                .DEFINE         "__kernel_reqflg"
_enadsp:                .DEFINE         "__kernel_enadsp"
;�@�@�@�֐�
_call_texrtn            .DEFINE         "__kernel_call_texrtn"

;
;�@cpu_config.c
;

;�@�@�@�ϐ�
_intnest:               .DEFINE         "__kernel_intnest"
_iscpulocked:           .DEFINE         "__kernel_iscpulocked"
_task_intmask:          .DEFINE         "__kernel_task_intmask"
;�@�@�@�֐�
_cpu_experr:            .DEFINE         "__kernel_cpu_experr"

;
;�@cpu_support.src
;

;�@�@�@�֐�
_dispatch:              .DEFINE         "__kernel_dispatch"
_exit_and_dispatch:     .DEFINE         "__kernel_exit_and_dispatch"
_activate_r:            .DEFINE         "__kernel_activate_r"
_no_reg_exception       .DEFINE         "__kernel_no_reg_exception"
_current_ccr            .DEFINE         "__kernel_current_ccr"
_set_ccr                .DEFINE         "__kernel_set_ccr"
_current_exr            .DEFINE         "__kernel_current_exr"
_set_exr                .DEFINE         "__kernel_set_exr"
;�@�@���̑�
_common_interrupt_process .DEFINE       "__kernel_common_interrupt_process"

;
;�@start.src
;
start                   .DEFINE         "__kernel_start"
_clear_b_section        .DEFINE         "__kernel_clear_b_section"

 .AENDI ;  _CPU_RENAME_INC_