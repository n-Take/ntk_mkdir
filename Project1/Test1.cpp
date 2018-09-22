//何か忘れたけど何かの練習の残骸
//2018724 保存
//作成日不明
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
		printf("年齢を入力して下さい：");
		scanf_s("%d", &(InData[DataCounter]).age);
		if (InData[DataCounter].age == -1) break;
		printf("名前を入力して下さい：");
		scanf_s("%s", &(InData[DataCounter]).name, _countof((*InData).name));
		printf("男性：0,女性：1を入力してくだい：");
		scanf_s("%d", &(InData[DataCounter]).gendar);
		DataCounter++;
		InData = (data*)realloc(InData, sizeof(data) * (DataCounter + 1));
	};

	if (InData[0].age == ENDNUM) {
		printf("1件も入力されませんでした\n");
		return 0;
	}

	for (int i = 0; i < DataCounter; i++)
	{
		printf("年齢：%d\n", InData[i].age);
		printf("名前：%s\n", InData[i].name);
		switch (InData[i].gendar) {
		case man:
			printf("性別：男性\n");
			break;
		case woman:
			printf("性別：女性\n");
			break;
		default:
			printf("性別は0か1で入力してください\n");
		}
	}

	free(InData);

	return 0;

}