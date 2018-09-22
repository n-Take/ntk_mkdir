#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdafx.h"

//#define recSize 1002/*入力レコードの最大文字数+2('\n', '\0')*/

//-------------------------------------------------
//関数名
//	outList
//引数
//	char *dataFile	入力ファイル名
//	char *listFile　集計(出力)ファイル名
//	int keyPos		レコード中キー項目の開始桁位置
//	int keyLen		レコード中キー項目の開始桁数
//	int valuePos	レコード中数値項目の開始桁位置
//	int valueLen	レコード中数値項目の開始桁数
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

	////fgets(s, m, f)：ストリーム f から文字の列(改行文字まで，最大 m－1 文字)を読み取り，
	////配列 s に格納し，s を返す。ストリームの終わりに達した場合は NULL を返す
	//if (fgets(inBuf, recSize, inFile) != NULL) {

	//	//strncpy(s1，s2，n)：文字列 s2 の先頭から n 個の文字を文字列 s1 に複写し，文字列 s1 の値を返す
	//	strncpy(key, inBuf + keyPos, keyLen);
	//	count = 1;
	//	//atol(s)：文字列sが表す数値をlong型の表現に変換した値を返す
	//	value = atol(strncpy(temp, inBuf + valuePos, valueLen));
	//	while (fgets(inBuf, recSize, inFile) != NULL){
	//		strncpy(inKey, inBuf + keyPos, keyLen);
	//		inValue = atol(strncpy(temp, inBuf + valuePos, valueLen));
	//		//strcmp(s1, s2)：文字列 s1 と s2 を比較し，s1＜s2 のとき負の値を，s1＝s2 
	//		//のとき 0 を，s1＞s2 のとき正の値を，それぞれ返す。
	//		if (strcmp(key, inKey) != 0) {
	//			fprintf(outFile, format, key, count, value);
	//			count = 1;

	//			//strcpy(s1, s2)：文字列 s2 を文字列 s1 に複写する。
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
