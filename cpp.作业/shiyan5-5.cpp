#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int a = 60, int b = 80) {
		x = a;
		y = b;
	}

	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
void display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
	};
int main() {
	point setA;
	int X, Y;
	cout << "����һ��iֵ" << endl;
	cin >> X;
	cout << "����һ��jֵ" << endl;
	cin >> Y;
	setA.setPoint(X,Y);
	setA. display();
}