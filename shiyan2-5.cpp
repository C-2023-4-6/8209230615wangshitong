#include<iostream>
using namespace std;
int main()
{
	char c;
	int en = 0, space = 0, num = 0, others = 0;
	cout << "�����ַ���" << endl;

	while ((c = getchar()) != 'n')
	{
		if (c >= 'a' && c < 'z' || c >= 'A' && c <= 'Z')
			en++;
		else if (c >= '0' && c <= '9')
			num++;
	   else if (c == ' ')
			space++;
		else
			others++;

	}
	cout << endl;
	cout << "��ĸ�ĸ���Ϊ��" << en << "���ֵĸ���Ϊ��" << num << "�ո�ĸ���Ϊ��" << space << "�����ַ��ĸ���Ϊ��" << others ;

	return 0;
}