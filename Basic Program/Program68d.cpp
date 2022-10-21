#include <iostream>
//inheritance - hierarchical
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
int main() {
	Stud2 stud1;
	Stud1 stud2;
	stud1.Pass();
	stud2.Pass();
	stud1.Stud::Pass();
	stud2.Stud::Pass();

	return 0;
}