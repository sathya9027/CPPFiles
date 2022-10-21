#include <iostream>
#include <string>
//nested while loop statement
using namespace std;

int main() {
	int i = 1;
	while (i<5) {
		int j = 1;
		while (j < 5) {
			cout << i << " " << j << endl;
			j++;
		}
		i++;
	}

	return 0;
}