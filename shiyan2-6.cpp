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
	cout << "���Լ��Ϊ��" <<x<< endl;

	int y = (a > b ? a:b);
	for (;y <= 0;y++)
	{
		if (y % a == 0, y % b == 0)
			break;
	}
		cout << "��С������Ϊ��" <<y<< endl;
	


	return 0;
}