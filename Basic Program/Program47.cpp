#include <iostream>
//pointers
using namespace std;
int main() {
	int a = 4;
	int* p;
	p = &a;
	cout << "Value of 'a' : " << a << endl;
	cout << "Value of 'p' : " << *p << endl;
	cout << "Address of 'a' : " << &a << endl;
	cout << "Address of 'p' : " << p << endl;
	a = 5;
	cout << "Value of 'a' : " << a << endl;
	cout << "Value of 'p' : " << *p << endl;
	cout << "Address of 'a' : " << &a << endl;
	cout << "Address of 'p' : " << p << endl;
	*p = 6;
	cout << "Value of 'a' : " << a << endl;
	cout << "Value of 'p' : " << *p << endl;
	cout << "Address of 'a' : " << &a << endl;
	cout << "Address of 'p' : " << p << endl;
	return 0;
}