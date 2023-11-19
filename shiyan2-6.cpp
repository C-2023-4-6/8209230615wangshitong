#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int x = (a < b ? a : b);
	for (;x >= 1;x--)
	{
		if (a % x == 0 && b % x == 0)
			break;
	}
	cout << "最大公约数为：" <<x<< endl;

	int y = (a > b ? a:b);
	for (;y <= 0;y++)
	{
		if (y % a == 0, y % b == 0)
			break;
	}
		cout << "最小公倍数为：" <<y<< endl;
	


	return 0;
}