#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F;
	cin >> F;
	double C;
	C = (F - 32) * 5 / 9;
	cout<< setprecision(4)<<C<<endl;
}