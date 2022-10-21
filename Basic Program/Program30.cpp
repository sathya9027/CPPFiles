#include <iostream>
#include <string>
//static variable
using namespace std;

void func() {
	int a = 1;
	static int b = 1;
	a++;
	b++;
	cout << "A : " << a << endl;
	cout << "B : " << b << endl;
}

int main() {
	func();
	func();
	func();
	func();

	return 0;
}