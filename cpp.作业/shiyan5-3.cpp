#include<iostream>
using namespace std;
class cuboid 
{
public:
	int length;
	int height;
	int width;
public:
	cuboid()
	{
		m_length = length;
		m_height = height;
		m_width = width;

	}
	int m_length;
	int m_height;
	int m_width;


};
void calculation()
{
	cuboid C1;
	cout << "������C1�ĳ���ߣ�" << endl;
	cin>> C1.m_length;
	cin>> C1.m_height;
	cin>> C1.m_width;
	int V;
	V = C1.m_length * C1.m_height * C1.m_width;
	cout << "cuboid C1�����Ϊ��" << V << endl;
}
void calculation2()
{
	cuboid C2;
	cout << "������C2�ĳ���ߣ�" << endl;
	cin >> C2.m_length;
	cin >> C2.m_height;
	cin >> C2.m_width;
	int V2;
	V2 = C2.m_length * C2.m_height * C2.m_width;
	cout << "cuboid C2�����Ϊ��" << V2 << endl;
}
void calculation3()
{
	cuboid C3;
	cout << "������C3�ĳ���ߣ�" << endl;
	cin >> C3.m_length;
	cin >> C3.m_height;
	cin >> C3.m_width;
	int V3;
	V3 = C3.m_length * C3.m_height * C3.m_width;
	cout << "cuboid C3�����Ϊ��" << V3 << endl;
}
int main() {

	calculation();
	calculation2();
	calculation3();
}