#include <iostream>
using namespace std;

int main()
{
    char a;
    float num1, num2;

    cout << "输入运算符：+、-、*、/ : ";
    cin >> a;

    cout << "输入两个数: ";
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
            cout << "发生错误！"<<endl;
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }

    default:// 如果运算符不是 +, -, * 或 /
        cout << "请输入正确运算符。";
        break;
    }

    return 0;