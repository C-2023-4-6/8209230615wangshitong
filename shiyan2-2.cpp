#include<iostream>
using namespace std;
int main()
{
	double x;
	cin >> x;
	if (0 < x&&x < 1)
		cout << 3 - 2 * x << endl;
	else if (1 <= x&&x <= 5)
		cout << 1 + 2 / (4 * x) << endl;
	else if (5 < x&&x < 10)
		cout << pow(x, 2) << endl;
	else
		cout << "你输入的x不存在，请重新输入" << endl;
	return 0;

}