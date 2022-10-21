#include <iostream>
#include <string>
//swap values
using namespace std;

int main() {
	int a, b;

	cout << "Enter 'a' value : ";cin >> a;
	cout << "Enter 'b' value : ";cin >>b;

	swap(a, b);

	cout << "a b" << endl;
	cout << a << " " << b << endl;

	return 0;
}