#include <iostream>
//multidimensional array
using namespace std;
int main() {
	int a[3][2];
	for (int x = 0;x < 3;x++) {
		for (int y = 0;y < 2;y++) {
			cout << "Enter a number : ";cin >> a[x][y];
		}
	}
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 2;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}