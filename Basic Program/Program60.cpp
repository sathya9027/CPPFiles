#include <iostream>
//class and object - private, public & protected
using namespace std;
class StudentInfo {
protected:
	int mark1;
	int mark2;
};
class Student : StudentInfo {
public:
	void SetMark1(int m1);
	void SetMark2(int m2);
	int Total();
};
void Student::SetMark1(int m1) {
	mark1 = m1;
}
void Student::SetMark2(int m2) {
	mark2 = m2;
}
int Student :: Total() {
	return mark1 + mark2;
}
int main() {
	Student stud1;
	stud1.SetMark1(80);		//No Error(public)
	stud1.SetMark2(90);		//No Error(public)
	cout << "Total : " << stud1.Total() << endl;		//No Error(public)
	return 0;
}