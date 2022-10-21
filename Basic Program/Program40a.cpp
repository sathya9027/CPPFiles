#include <iostream>
using namespace std;
//user define function - type 1
void OddOrEven() {
	int i;
	cout << "Enter a number : ";cin >> i;
	if (i % 2 == 0) {
		cout << "Number " << i << " is a even number" << endl;
	}
	else {
		cout << "Number " << i << " is a odd number" << endl;
	}
}
int main() {
	OddOrEven();
	return 0;
}