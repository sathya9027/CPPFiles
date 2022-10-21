#include <iostream>
//pointer and array
using namespace std;
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* ptr;
	ptr = &a[0];
	for (int i = 0;i < 5;i++) {
		cout << *(ptr + i) << endl;
		cout << ptr + i << endl;
	}
	return 0;
}