#include <iostream>
using namespace std;
//user define function - type 4
string OddOrEven(int i) {
	if (i % 2 == 0) {
		return "Even number";
	}
	else {
		return "Odd number";
	}
}
int main() {
	int i;
	cout << "Enter a number : ";cin >> i;
	cout << OddOrEven(i);
	return 0;
}