#include <iostream>
//class and object - copy constructor
using namespace std;
class StudentInfo {
	int mark1;
	int mark2;
public:
	StudentInfo();
	StudentInfo(int m1, int m2);
	StudentInfo(const StudentInfo& copy);
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
StudentInfo::StudentInfo(const StudentInfo& copy) : mark1(copy.mark1), mark2(copy.mark2) {
	cout << "Calling Copy Constructor" << endl;
	/*mark1 = copy.mark1;
	mark2 = copy.mark2;*/
}
StudentInfo::~StudentInfo() {
	cout << "Calling Destructor" << endl;
}
int StudentInfo::Total() {
	return mark1 + mark2;
}
int main() {
	StudentInfo stud, stud1(80, 90), stud2 = stud1;
	cout << "Total : " << stud1.Total() << endl;
	cout << "Total : " << stud2.Total() << endl;
	return 0;
}