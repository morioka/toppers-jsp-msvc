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
;  @(#) $Id: h8_3048f_asm.inc,v 1.7 2007/03/23 07:58:33 honda Exp $
;

;  H8/3048F�p��`�i�A�Z���u���p�j

 .AIFDEF _H8_3048F_ASM_H_
 .AELSE

_H8_3048F_ASM_H_: .DEFINE ""

        .INCLUDE "util_asm.inc"

;
;  �������W�X�^�̒�`
;

;
;  ���[�h�R���g���[�����W�X�^
;
H8MDCR:                 .DEFINE         "H'fffff1"

;
;  I/O�|�[�g
;

;
;  �|�[�g1
;
H8P1DDR:                .DEFINE         "H'ffffc0"

;
;  �|�[�g2
;
H8P2DDR:                .DEFINE         "H'ffffc1"

;
;  �|�[�g5
;
H8P5DDR:                .DEFINE         "H'ffffc8"

;
;  �|�[�g8
;
H8P8DDR:                .DEFINE         "H'ffffcd"
H8P8DDR_CS1:            .DEFINE         "BIT3"


;
;  �o�X�X�e�[�g�R���g���[��
;

;�@�o�X���R���g���[�����W�X�^
H8ABWCR:                .DEFINE         "H'ffffec"
H8ABWCR_ABW1_BIT:       .DEFINE         "1"

;�@�A�N�Z�X�E�X�e�[�g�E�R���g���[���E���W�X�^
H8ASTCR:                .DEFINE         "H'ffffed"
H8ASTCR_AST1_BIT:       .DEFINE         "1"

;�@�o�X�E�����[�X�E�R���g���[���E���W�X�^
H8BRCR:                 .DEFINE         "H'fffff3"
H8BRCR_BRLE_BIT:        .DEFINE         "0"
H8BRCR_A21E_BIT:        .DEFINE         "5"

 .AENDI ; _H8_3048F_ASM_H_
