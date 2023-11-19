#include<iostream>
using namespace std;
int main()
{
	char c;
	int en = 0, space = 0, num = 0, others = 0;
	cout << "输入字符串" << endl;

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
	cout << "字母的个数为：" << en << "数字的个数为：" << num << "空格的个数为：" << space << "其他字符的个数为：" << others ;

	return 0;
}