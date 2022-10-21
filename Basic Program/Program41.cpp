#include <iostream>
//array
using namespace std;
int main() {
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < size(a); i++) {
		cout << "a[" << i << "] : " << a[i] << endl;
	}
	return 0;
}