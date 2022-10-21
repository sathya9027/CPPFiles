#include <iostream>
#include <string>
//Conditional Operator(?)
using namespace std;

int main() {

	int a = 10, b = 20, c = 30;

	c = (a > b) ? a : b;
	a = (c < b) ? b : c;
	b = (a < c) ? a : c;

	cout << c << endl;
	cout << a << endl;
	cout << b << endl;

	return 0;
}