#include <iostream>
//class and object - parameterized constructor
using namespace std;
class StudentInfo {
	int mark1;
	int mark2;
public:
	StudentInfo();
	StudentInfo(int m1, int m2);
	int Total();
	~StudentInfo();
};
StudentInfo::StudentInfo() {
	mark1 = NULL;
	mark2 = NULL;
	cout << "Calling Constructor" << endl;
}
StudentInfo::StudentInfo(int m1, int m2) : mark1(m1), mark2(m2) {
	cout << "Calling Parameterized Constructor" << endl;
	/*mark1 = m1;
	mark2 = m2;*/
}
StudentInfo::~StudentInfo() {
	cout << "Calling Destructor" << endl;
}
int StudentInfo::Total() {
	return mark1 + mark2;
}
int main() {
	StudentInfo stud, stud1(80, 90);
	cout << "Total : " << stud1.Total() << endl;
	return 0;
}