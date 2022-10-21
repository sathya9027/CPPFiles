#include <iostream>
//inheritance - hybrid
using namespace std;
class Stud {		//Base Class
public:
	void Pass() {
		cout << "Student have Passed....(Base)" << endl;
	}
};
class Stud1 :public Stud {		//Derived Class 1
public:
	void Pass() {
		cout << "Student have Passed....(Derived 1)" << endl;
	}
};
class Stud2 :public Stud {		//Derived Class 2
public:
	void Pass() {
		cout << "Student have Passed....(Derived 2)" << endl;
	}
};
class StudInfo :public Stud1, public Stud2 {		//Derived 3
public:
	void Pass() {
		cout << "Student have Passed....(Derived 3)" << endl;
	}
};
int main() {
	StudInfo studInfo;
	studInfo.Stud::Pass();		//Base
	studInfo.Stud1::Pass();		//Derived 1
	studInfo.Stud2::Pass();		//Derived 2
	studInfo.Pass();		//Derived 3
	return 0;
}