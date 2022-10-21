#include <iostream>
#include <string>
//nested for loop statement
using namespace std;

int main() {
	cout << "i j" << endl;
	for(int i = 1; i < 3; i++) {
		for (int j = 1;j < 5;j++) {
			cout << i << " " << j << endl;
		}
	}

	return 0;
}