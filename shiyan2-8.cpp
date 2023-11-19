#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int x = a;
	if (a / 2 * x - 1 / 2 * x <= 1e-5)
	{
		x = 1 / 2 * (x + a / x);
	cout << "所求平方根为："<<x << endl;
}
	else
	{
		for(;a / 2 * x - 1 / 2 * x > 1e-5;x = 1 / 2 * (x + a / x))

			cout << "所求平方根为：" << x << endl;
			
	}


	return 0;
}