#include <iostream>
//inheritance - multiple
using namespace std;
class Student1 {		//Base Class
public:
	void Pass() {
		cout << "Student have Passed....(Base1)" << endl;
	}
};
class Student2 {		//Base Class
public:
	void Pass() {
		cout << "Student have Passed....(Base2)" << endl;
	}
};
class Stud :public Student1, public Student2 {		//Derived Class
public:
	void Pass() {
		cout << "Student have Passed....(Derived)" << endl;
	}
};
int main() {
	Stud student;
	student.Student1::Pass();		//Calling Base1 Class
	student.Student2::Pass();		//Calling Base2 Class
	student.Pass();		//Calling Derived Class
	return 0;
}