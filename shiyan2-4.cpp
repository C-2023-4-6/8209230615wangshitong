#include <iostream>
using namespace std;

int main()
{
    char a;
    float num1, num2;

    cout << "�����������+��-��*��/ : ";
    cin >> a;

    cout << "����������: ";
    cin >> num1 >> num2;

    switch (a)
    {
    case '+':
        cout << num1 + num2<<endl;
        break;

    case '-':
        cout << num1 - num2<<endl;
        break;

    case '*':
        cout << num1 * num2<<endl;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "��������"<<endl;
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }

    default:// ������������ +, -, * �� /
        cout << "��������ȷ�������";
        break;
    }

    return 0;