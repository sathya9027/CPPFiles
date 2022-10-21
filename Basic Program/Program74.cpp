#include <iostream>
//function overiding
using namespace std;
class Student1 {
public:
	virtual void Display() {
		cout << "Display in base class...." << endl;
	}
	virtual void Show() {
		cout << "Show in base class...." << endl;
	}
	void Print() {
		cout << "Print in base class...." << endl;
	}
	void Execute() {
		cout << "Execute in base class...." << endl;
	}
};
class Student2 :public Student1 {
public:
	void Display() {
		cout << "Display in derived class...." << endl;
	}
	void Print() {
		cout << "Print in derived class...." << endl;
	}
	void Execute(int x) {
		cout << "Execute in derived class...." << endl;
	}
};
int main() {
	Student1* s1 = new Student2();
	//Student1* s1;			//Base class pointer
	//Student2 s2;			//Derived class object
	//s1 = &s2;
	s1->Display();			//Late Binding
	s1->Show();				//Late Binding
	s1->Print();			//Early Binding
	s1->Execute();			//Late Binding
	//s1->Execute(5);		//Error(not present in base class)
	return 0;
}