#include <iostream>

using namespace std;

int main()
{
	char a[20];
	int i = 0;
	cin >> a;
	for (;a[i];i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')

		{
			a[i] -= 32;
			cout << a[i];
		}
		 else if (a[i] >= 'A' && a[i] <= 'Z')
			cout << int(a); 
		
	
	}

	cout << endl;

	system("pause");
	return 0;
}