const int A = 5;
int n, a[A], i, j;
#include<iostream>
using namespace std;
int main()
{
    const int A = 5;
	int n, a[A], i, j;
	for (n = 0;n < A;n++)
	{
		cin >> a[n];
		if (a[n] < 0)
			break;
	}
    for (n = 0;n < A;n++)
{
	cin >> a[n];
	if (a[n] < 0)
		break;
}
    for (i = 0;i < n - 1;i++)
	    for (j = i + 1;j < n;j++)
		if (a[i] < a[j])
		{
			int t;
			t = a[i];
			a[i] = a[j];
			a[j] = t;

		}


for (i = 0;i < n;i++)

	cout << a[i] << "\t";
return 0;

}