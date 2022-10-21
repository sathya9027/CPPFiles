#include <iostream>
//sum of an array and max number of an array
using namespace std;
int main() {
	int add = 0;
	int max = 0;
	int a[5];
	for (int i = 0; i < size(a); i++) {
		cout << "Enter " << i+1 << " number : ";cin >> a[i];
	}
	for (int i = 0; i < size(a); i++) {
		cout << "a[" << i << "] : " << a[i] << endl;
		add += a[i];
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << "Sum of an array : " << add << endl;
	cout << "Maximum number of an array : " << max << endl;
	return 0;
}