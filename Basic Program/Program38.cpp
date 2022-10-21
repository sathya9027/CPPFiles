#include <iostream>
using namespace std;
//recursive function
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}
int main() {
	int i;
	cout << "Enter a factorial number : ";cin >> i;
	cout << "Factorial of " << i << " : " << factorial(i) << endl;
	return 0;
}