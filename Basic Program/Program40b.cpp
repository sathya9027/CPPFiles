#include <iostream>
using namespace std;
//user define function - type 2
int OddOrEven() {
	int i;
	cout << "Enter a number : ";cin >> i;
	return i;
}
int main() {
	int i;
	i = OddOrEven();
	if (i % 2 == 0) {
		cout << "Number " << i << " is a even number" << endl;
	}
	else {
		cout << "Number " << i << " is a odd number" << endl;
	}
	return 0;
}