#include <iostream>
#include <string>
//1234 = 1+2+3+4 = 10 = 1+0 = 1
using namespace std;

int main() {
	int number;

	cout << "Enter any number : ";cin >> number;

	if (number % 9 == 0) {
		if (number == 0) {
			cout << 0 << endl;
		}
		else {
			cout << 9 << endl;
		}
	}
	else {
		cout << "Sum of number : " << number % 9 << endl;
	}

	return 0;
}