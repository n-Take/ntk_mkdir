#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdafx.h"

//#define recSize 1002/*���̓��R�[�h�̍ő啶����+2('\n', '\0')*/

//-------------------------------------------------
//�֐���
//	outList
//����
//	char *dataFile	���̓t�@�C����
//	char *listFile�@�W�v(�o��)�t�@�C����
//	int keyPos		���R�[�h���L�[���ڂ̊J�n���ʒu
//	int keyLen		���R�[�h���L�[���ڂ̊J�n����
//	int valuePos	���R�[�h�����l���ڂ̊J�n���ʒu
//	int valueLen	���R�[�h�����l���ڂ̊J�n����
//--------------------------------------------------

void outList(char *dataFile, char *listFile, int keyPos, int keyLen, int valuePos,int valueLen) {
	//FILE *inFile, *outFile;
	//char inBuf[recSize], inKey[10],key[10],temp[10];
	//long count, inValue, value;
	//char format[] = "%9s %9ld %9ld\n";
	//key[keyLen] = '\0';
	//inKey[keyLen] = '\0';
	//temp[valueLen] = '\0';
	//outFile = fopen(listFile, "w");
	//inFile = fopen(dataFile, "r");

	////fgets(s, m, f)�F�X�g���[�� f ���當���̗�(���s�����܂ŁC�ő� m�|1 ����)��ǂݎ��C
	////�z�� s �Ɋi�[���Cs ��Ԃ��B�X�g���[���̏I���ɒB�����ꍇ�� NULL ��Ԃ�
	//if (fgets(inBuf, recSize, inFile) != NULL) {

	//	//strncpy(s1�Cs2�Cn)�F������ s2 �̐擪���� n �̕����𕶎��� s1 �ɕ��ʂ��C������ s1 �̒l��Ԃ�
	//	strncpy(key, inBuf + keyPos, keyLen);
	//	count = 1;
	//	//atol(s)�F������s���\�����l��long�^�̕\���ɕϊ������l��Ԃ�
	//	value = atol(strncpy(temp, inBuf + valuePos, valueLen));
	//	while (fgets(inBuf, recSize, inFile) != NULL){
	//		strncpy(inKey, inBuf + keyPos, keyLen);
	//		inValue = atol(strncpy(temp, inBuf + valuePos, valueLen));
	//		//strcmp(s1, s2)�F������ s1 �� s2 ���r���Cs1��s2 �̂Ƃ����̒l���Cs1��s2 
	//		//�̂Ƃ� 0 ���Cs1��s2 �̂Ƃ����̒l���C���ꂼ��Ԃ��B
	//		if (strcmp(key, inKey) != 0) {
	//			fprintf(outFile, format, key, count, value);
	//			count = 1;

	//			//strcpy(s1, s2)�F������ s2 �𕶎��� s1 �ɕ��ʂ���B
	//			strcpy(key, inKey);
	//			value = inValue;
	//		}
	//		else {
	//			count++;
	//			value += inValue;
	//		}
	//	}
	//	fprintf(outFile, format, key, count, value);
	//}
	//fclose(inFile);
	//fclose(outFile);
	return;
}
