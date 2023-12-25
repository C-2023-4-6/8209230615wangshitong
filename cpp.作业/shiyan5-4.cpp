#include<iostream>
using namespace std;
class Student {

public:
	int num;
	int goal;
	Student(int, int);
	friend void m(Student*);
};
Student::Student(int a = 0, int b = 0) {
	num = a;
	goal = b;
}
	
void m(Student* s) {
	Student mm = s[0];
	for (int i = 0;i < 5;i++)

	{
		if (s[i].goal > mm.goal)
		{
			mm = s[i];
		}
		cout << mm.num << endl;
	}


}
int main()
{
	Student s1[5] = {

			Student(1,50),
			Student(2,78),
			Student(3,45),
			Student(4,96),
			Student(5,88) };
	m(s1);

	return 0;
}




