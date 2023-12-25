#include<iostream>
using namespace std;

class Time 
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time() {
		m_hour = hour;
		m_minute = minute;
		m_sec = sec;
	
	}
	int m_hour;
	int m_minute;
	int m_sec;
};
void text01()
{
	Time t1;
	cin >> t1.m_hour;
	cin >> t1.m_minute;
	cin >> t1.m_sec;
	cout << t1.m_hour << ":" << t1.m_minute << ":" << t1.m_sec << endl;

}
int main() {
	text01();

}