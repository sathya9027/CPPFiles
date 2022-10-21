#include <iostream>
#include <string>
//Assignment Operator(=,+=,-=,*=,/=,%=)
using namespace std;

int main() {

	int a = 20, b;
	b = a;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	a += b;
	cout << "a += b : " << a << endl;

	b -= a;
	cout << "b -= a : " << b << endl;

	a *= b;
	cout << "a *= b : " << a << endl;

	b /= a;
	cout << "b /= a : " << b << endl;

	b %= a;
	cout << "b %= a : " << b << endl;
	

	return 0;
}