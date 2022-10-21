#include <iostream>
#include <string>
//pattern
using namespace std;
int main() {
	int row, column;
	cout << "Enter no of rows : ";cin >> row;
	//cout << "Enter no of columns : ";cin >> column;
	for (int i = row;i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}