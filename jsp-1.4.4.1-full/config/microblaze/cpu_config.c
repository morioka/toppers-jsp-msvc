/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
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
 *  @(#) $Id: cpu_config.c,v 1.4 2003/12/11 00:58:01 honda Exp $
 */

/*
 *  �v���Z�b�T�ˑ����W���[���iMicroblaze�p�j
 */
#include "jsp_kernel.h"
#include "check.h"
#include "task.h"
#include <microblaze.h>


/*
 * ���荞�݃n���h��/�r�b�g�}�X�N�̃e�[�u��
 */
FP  int_handler_table[32];
UW  int_bit_table[32];

/*
 * CPU��O�n���h���̋^���e�[�u��
 * Not Support!
 */
/* FP	exc_table[(0x1E0 >> 5) + 1]; */


/*
 * ���荞�݂̃l�X�g�񐔂̃J�E���g
 * �J�[�l���N�����̓^�X�N�Ɨ����Ƃ݂Ȃ�����1�ŏ���������
 */
UW interrupt_count = 1;

/*
 *  �v���Z�b�T�ˑ��̏�����
 */
void
cpu_initialize()
{
  int i;
    
  /*
   * int_handler_table[],int_plevel_table[]�̏�����
   * ���o�^�̊����ݔ�������cpu_interrup()���Ăяo�����悤��
   * no_reg_interrup()��o�^����
   */
  for(i = 0; i < 32; i++){
    int_handler_table[i] = no_reg_interrupt;
    int_bit_table[i]  = 1 << i; /* �r�b�g�p�^�[���̐��� */
  }
  
  /*
   *  INTC�X�^�[�g
   */
  intc_start();
}



/*
 *  �v���Z�b�T�ˑ��̏I������
 */
void
cpu_terminate()
{
}


/*
 * �o�^����Ă��Ȃ���O����������ƌĂяo�����
 * Not Support! 
 */
/*
void
cpu_expevt(void)
{
}
*/

/*
 * ���o�^�̊����݂����������ꍇ�ɌĂяo�����
 * Not Yet!
 */
void
cpu_interrupt(void)
{
    syslog(LOG_EMERG, "Unregisted Interrupt Occur!");

    while(1);
}