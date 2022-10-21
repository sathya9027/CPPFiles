#include <iostream>
//testseries - record 2
using namespace std;

int main() {
	int t;
	cout << "Enter no of testcases : ";cin >> t;
	while (t--) {
		int matches = 5;
		int india = 0, england = 0;
		while (matches--) {
			int r;
			cout << "Enter Result ( 1=India / 2=England ) : ";cin >> r;
			if (r == 1) {
				india++;
			}
			else if (r == 2) {
				england++;
			}
		}
		if (india > england) {
			cout << "India" << endl;
		}
		else if (england > india) {
			cout << "England" << endl;
		}
		else {
			cout << "Draw" << endl;
		}
	}
	return 0;
}