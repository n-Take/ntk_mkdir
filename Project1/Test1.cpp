//�����Y�ꂽ���ǉ����̗��K�̎c�[
//2018724 �ۑ�
//�쐬���s��
//
//

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define ENDNUM -1

typedef struct {
	char name[64];
	int age;
	int gendar;
}data;

enum {
	man = 0,
	woman = 1
};

int Test1()
{
	data *InData;
	int DataCounter = 0;

	InData = (data *)malloc(sizeof(data) * 1);

	if (InData == NULL) exit(0);

	while (true) {
		printf("�N�����͂��ĉ������F");
		scanf_s("%d", &(InData[DataCounter]).age);
		if (InData[DataCounter].age == -1) break;
		printf("���O����͂��ĉ������F");
		scanf_s("%s", &(InData[DataCounter]).name, _countof((*InData).name));
		printf("�j���F0,�����F1����͂��Ă������F");
		scanf_s("%d", &(InData[DataCounter]).gendar);
		DataCounter++;
		InData = (data*)realloc(InData, sizeof(data) * (DataCounter + 1));
	};

	if (InData[0].age == ENDNUM) {
		printf("1�������͂���܂���ł���\n");
		return 0;
	}

	for (int i = 0; i < DataCounter; i++)
	{
		printf("�N��F%d\n", InData[i].age);
		printf("���O�F%s\n", InData[i].name);
		switch (InData[i].gendar) {
		case man:
			printf("���ʁF�j��\n");
			break;
		case woman:
			printf("���ʁF����\n");
			break;
		default:
			printf("���ʂ�0��1�œ��͂��Ă�������\n");
		}
	}

	free(InData);

	return 0;

}