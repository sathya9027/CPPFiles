#include <iostream>
//inheritance - multilevel
using namespace std;
class Stud {		//Base Class
public:
	void Pass() {
		cout << "Student have Passed....(Parent)" << endl;
	}
};
class ChildStud :public Stud {		//Intermediate Class
public:
	void Pass() {
		cout << "Student have Passed....(Child)" << endl;
	}
};
class SubChildStud :public ChildStud {		//Derived Class
public:
	void Pass() {
		cout << "Student have Passed....(SubChild)" << endl;
	}
};
int main() {
	SubChildStud student;
	student.Stud::Pass();		//Calling Base Class
	student.ChildStud::Pass();		//Calling Intermediate Class
	student.Pass();		//Calling Derived Class
	return 0;
}