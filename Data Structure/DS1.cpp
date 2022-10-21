#include <iostream>
//pair
using namespace std;
int main() {
	pair<int, char>pair1(10, 'A');	//method1	//also can be initialized in constructor
	pair<int, char>pair2;
	pair<int, char>pair3;
	pair2.first = 20;				//method2
	pair2.second = 'B';				//method2
	pair3 = make_pair(30, 'C');		//method3
	cout << pair1.first << endl;	//initialized to zero (int, float, double)
	cout << pair1.second << endl;	//initialized to NULL (char, string)
	cout << pair2.first << endl;
	cout << pair2.second << endl;
	cout << pair3.first << endl;
	cout << pair3.second << endl;
	if (pair1 == pair2) {
		cout << "pair1 and pair2 are equal" << endl;
	}
	else {
		cout << "pair1 and pair2 are not equal" << endl;
	}
	return 0;
}