/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2007 by KURUSUGAWA Electronics Industry Inc, JAPAN
 *  Copyright (C) 2008 by Takahisa Yokota
 *
 *  ��L���쌠�҂́C�ȉ��� (1)�`(4) �̏������CFree Software Foundation 
 *  �ɂ���Č��\����Ă��� GNU General Public License �� Version 2 �ɋL
 *  �q����Ă�������𖞂����ꍇ�Ɍ���C�{�\�t�g�E�F�A�i�{�\�t�g�E�F�A
 *  �����ς������̂��܂ށD�ȉ������j���g�p�E�����E���ρE�Ĕz�z�i�ȉ��C
 *  ���p�ƌĂԁj���邱�Ƃ𖳏��ŋ�������D
 *  (1) �{�\�t�g�E�F�A���\�[�X�R�[�h�̌`�ŗ��p����ꍇ�ɂ́C��L�̒���
 *      ���\���C���̗��p��������щ��L�̖��ۏ؋K�肪�C���̂܂܂̌`�Ń\�[
 *      �X�R�[�h���Ɋ܂܂�Ă��邱�ƁD
 *  (2) �{�\�t�g�E�F�A���C���C�u�����`���ȂǁC���̃\�t�g�E�F�A�J���Ɏg
 *      �p�ł���`�ōĔz�z����ꍇ�ɂ́C�Ĕz�z�ɔ����h�L�������g�i���p
 *      �҃}�j���A���Ȃǁj�ɁC��L�̒��쌠�\���C���̗��p��������щ��L
 *      �̖��ۏ؋K����f�ڂ��邱�ƁD
 *  (3) �{�\�t�g�E�F�A���C�@��ɑg�ݍ��ނȂǁC���̃\�t�g�E�F�A�J���Ɏg
 *      �p�ł��Ȃ��`�ōĔz�z����ꍇ�ɂ́C���̂����ꂩ�̏����𖞂�����
 *      �ƁD
 *    (a) �Ĕz�z�ɔ����h�L�������g�i���p�҃}�j���A���Ȃǁj�ɁC��L�̒�
 *        �쌠�\���C���̗��p��������щ��L�̖��ۏ؋K����f�ڂ��邱�ƁD
 *    (b) �Ĕz�z�̌`�Ԃ��C�ʂɒ�߂���@�ɂ���āCTOPPERS�v���W�F�N�g��
 *        �񍐂��邱�ƁD
 *  (4) �{�\�t�g�E�F�A�̗��p�ɂ�蒼�ړI�܂��͊ԐړI�ɐ����邢���Ȃ鑹
 *      �Q������C��L���쌠�҂����TOPPERS�v���W�F�N�g��Ɛӂ��邱�ƁD
 * 
 *  �{�\�t�g�E�F�A�́C���ۏ؂Œ񋟂���Ă�����̂ł���D��L���쌠�҂�
 *  ���TOPPERS�v���W�F�N�g�́C�{�\�t�g�E�F�A�Ɋւ��āC���̓K�p�\����
 *  �܂߂āC�����Ȃ�ۏ؂��s��Ȃ��D�܂��C�{�\�t�g�E�F�A�̗��p�ɂ�蒼
 *  �ړI�܂��͊ԐړI�ɐ����������Ȃ鑹�Q�Ɋւ��Ă��C���̐ӔC�𕉂�Ȃ��D
 * 
 *  @(#) $Id: sys_config.h,v 1.10 2003/12/06 09:47:04 hiro Exp $
 */

/*
 *	�^�[�Q�b�g�V�X�e���ˑ����W���[���iM52235EVB�p�j
 *
 *  ���̃C���N���[�h�t�@�C���́Ct_config.h �݂̂���C���N���[�h�����D
 *  ���̃t�@�C�����璼�ڃC���N���[�h���Ă͂Ȃ�Ȃ��D
 */

#ifndef _SYS_CONFIG_H_
#define _SYS_CONFIG_H_

/*
 *  ���[�U�[��`���
 */
#include <user_config.h>

/*
 *  �J�[�l���̓������ʖ��̃��l�[��
 */
#include <sys_rename.h>

/*
 *  �^�[�Q�b�g�V�X�e���̃n�[�h�E�F�A�����̒�`
 */
#include "m52235evb.h"

/*
 *  ���l�f�[�^�����񉻗p�}�N���̒�`
 */
#include <util.h>

/*
 *  �N�����b�Z�[�W�̃^�[�Q�b�g�V�X�e����
 */
#define	TARGET_NAME	"M52235EVB"

/*
 *�@��^�X�N�R���e�L�X�g�p�X�^�b�N�̏����l
 */
#define str_STACKTOP	TO_STRING(STACKTOP)


/*
 *�@�����̗�O�����x�N�^
 */
#define EXCVT_ORIG   (0x00000000)

/*
 *  �������ԑ҂��̂��߂̒�`
 */
#define	SIL_DLY_TIM1   120
#define	SIL_DLY_TIM2	80

#ifndef _MACRO_ONLY
/*
 *  �^�[�Q�b�g�V�X�e���ˑ��̏�����
 */
extern void	sys_initialize(void);

/*
 *  �^�[�Q�b�g�V�X�e���̏I��
 *
 *  �V�X�e�����I�����鎞�Ɏg���DROM���j�^�^GDB STUB�ďo���Ŏ�������D
 */
extern void	sys_exit(void);

/*
 *  �^�[�Q�b�g�V�X�e���̕����o��
 *
 *  �V�X�e���̒჌�x���̕����o�̓��[�`���DROM���j�^�^GDB STUB�ďo���Ŏ�
 *  ������D
 */
extern void	sys_putc(char c);

#endif /* _MACRO_ONLY */

/*
 *  ��O�x�N�^�e�[�u���֘A�̃}�N����`
 *  �@�@�}�N���̐���
 *  �@�@�@KERNEL_HAS_A_VECTOR_TABLE
 *  �@�@�@�@�J�[�l������O�x�N�^�e�[�u��������
 *  �@�@�@SIO_RESERVED
 *  �@�@�@�@�V���A���f�o�C�X���f�o�b�K�ɂ���Ďg�p����Ă���
 */
#ifdef GDB_STUB
/*
 *  GDB-stub�̏ꍇ
 *  �@�@�J�[�l���͗�O�x�N�^�e�[�u�����������A�����݂̍ۂɂ�
 *�@�@�@stub���Ǘ����Ă����O�x�N�^�e�[�u�����Q�Ƃ���
 *  �@�@�V���A���|�[�g��stub����L���Ă���
 */
//#define SIO_RESERVED

#else /* GDB_STUB */
/*
 *  ROM���̏ꍇ
 *  �@�@���Z�b�g���FROM��ɂ����O�x�N�^�e�[�u�����Q�Ƃ���
 *  �@�@��������FRAM��ɂ����O�x�N�^�e�[�u�����Q�Ƃ���
 */
#define KERNEL_HAS_A_VECTOR_TABLE

#endif /* GDB_STUB */

#endif /* _SYS_CONFIG_H_ */