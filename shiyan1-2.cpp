#include<iostream>
using namespace std;
int main()
{
	double r;
	double h;
	cin >> r;
	cin >> h;
	const double w = 3.14;
	double S = w * pow(r,2);
	double V = (S * h)/3;
	cout <<" 圆锥的体积为" << V << endl;
}