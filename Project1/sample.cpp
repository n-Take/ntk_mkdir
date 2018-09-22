///
//AOJのの回答プログラム
// create:20180908
//


#include <iostream>
#include <cstdlib>
using namespace std;

//data2のほうが大きいときtrue
//data2のほうが小さいときfalse
bool LargeTrue(int data1, int data2) {
	if (data1 <= data2) {
		return true;
	}
	else {
		return false;
	}
}


//方向check
//範囲内であるならTrue
//範囲外であるならFlase
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

	//x方向y方向両方Trueならば"Yes",以外"No"
	if (Dircheck(x, r, W) && Dircheck(y, r, h)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	system("pause");
	return 0;
}

