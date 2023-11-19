#include<iostream>
using namespace std;
int main()
{
	double sum = 0, pay=0,money=0;
	
	for (double i = 2;i <= 100;i = 2 * i)
	{
		cout << i << endl;
		sum += i;
		money = 0.8 * sum;
		pay = money / 6;
	}


	cout << "花销总数额为：" << money <<"\n" << "平均每天开销为： " << pay << endl;


}