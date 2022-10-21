#include <iostream>
//class and object - parameterized constructor
using namespace std;
class StudentInfo {
	int mark1;
	int mark2;
public:
	StudentInfo();
	StudentInfo(int age);
	void SetMark1(int m1);
	void SetMark2(int m2);
	int Total();
	~StudentInfo();
};
StudentInfo::StudentInfo() {
	mark1 = NULL;
	mark2 = NULL;
	cout << "Calling Constructor" << endl;
}
StudentInfo::StudentInfo(int age) {
	mark1 = NULL;
	mark2 = NULL;
	cout << "Your Age : " << age << endl;
}
StudentInfo::~StudentInfo() {
	cout << "Calling Destructor" << endl;
}
void StudentInfo::SetMark1(int m1) {
	mark1 = m1;
}
void StudentInfo::SetMark2(int m2) {
	mark2 = m2;
}
int StudentInfo::Total() {
	return mark1 + mark2;
}
int main() {
	StudentInfo stud1, stud2(19), stud3(17);
	stud1.SetMark1(80);
	stud1.SetMark2(90);
	cout << "Total : " << stud1.Total() << endl;
	return 0;
}