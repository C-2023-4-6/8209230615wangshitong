#define _CRT_SECURE NO WARNINGS
#include"student.h"
#include<iostream>
using namespace std;
void Student::display()
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
};
void Student::set_value(const char num[], const char name[], const char sex) {
    strcpy(this->num, num);
    strcpy(this->name, name);
    this->sex = sex;
}