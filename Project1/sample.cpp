///
//AOJ�̂̉񓚃v���O����
// create:20180908
//


#include <iostream>
#include <cstdlib>
using namespace std;

//data2�̂ق����傫���Ƃ�true
//data2�̂ق����������Ƃ�false
bool LargeTrue(int data1, int data2) {
	if (data1 <= data2) {
		return true;
	}
	else {
		return false;
	}
}


//����check
//�͈͓��ł���Ȃ�True
//�͈͊O�ł���Ȃ�Flase
bool Dircheck(int CntCircle,int radius,int WidHei) {
	if (WidHei > 0) {
		return LargeTrue(CntCircle + radius, WidHei);
	}
	else if (WidHei <= 0) {
		return LargeTrue(WidHei, CntCircle - radius);
	}
}


int main(void)
{
	int W, h, x, y, r = 0;

	cin >> W >> h >> x >> y >> r;

	//x����y��������True�Ȃ��"Yes",�ȊO"No"
	if (Dircheck(x, r, W) && Dircheck(y, r, h)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	system("pause");
	return 0;
}

