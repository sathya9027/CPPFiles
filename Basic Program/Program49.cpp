#include <iostream>
//call by pointers
using namespace std;
int ChangeValue(int* x) {
	cout << *x << endl;
	*x = 10;
	cout << *x << endl;
	return 0;
}
int main() {
	int a = 5;
	cout << a << endl;
	ChangeValue(&a);
	cout << a << endl;
	return 0;
}