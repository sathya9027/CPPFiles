#include <iostream>
#include <string>
//Logical Operator(&&,||,!!)
using namespace std;

int main() {

	int a = true;
	int b = false;
	cout << "a = true, b = false" << endl;
	cout << "a && b : " << (a && b) << endl;
	cout << "a || b : " << (a || b) << endl;
	cout << "! a : " << (!a) << endl;
	cout << "! b : " << (!b) << endl;

	return 0;
}