#include <iostream>
//inheritance - single
using namespace std;
class Student1 {		//Base Class
public:
	void Pass() {
		cout << "Student have Passed....(Base1)" << endl;
	}
};

class Stud :public Student1 {		//Derived Class
public:
	void Pass() {
		cout << "Student have Passed....(Derived)" << endl;
	}
};
int main() {
	Stud student;
	student.Student1::Pass();		//Calling Base1 Class
	student.Pass();		//Calling Derived Class
	return 0;
}