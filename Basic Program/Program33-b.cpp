#include <iostream>
#include <string>
//extern2
using namespace std;

extern int a;

void display() {
	a = 10;

	cout << "Value of a2 : " << a << endl;
}