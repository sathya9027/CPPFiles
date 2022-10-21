#include <iostream>
//pair swap
using namespace std;
int main() {
	pair<int, char>pair1(10, 'A');
	pair<int, char>pair2;
	pair2.first = 20;
	pair2.second = 'B';
	cout << "Before Swap" << endl;
	cout << "Pair1" << endl;
	cout << pair1.first << " " << pair1.second << endl;
	cout << "Pair2" << endl;
	cout << pair2.first << " " << pair2.second << endl;
	pair1.swap(pair2);
	cout << "After Swap" << endl;
	cout << "Pair1" << endl;
	cout << pair1.first << " " << pair1.second << endl;
	cout << "Pair2" << endl;
	cout << pair2.first << " " << pair2.second << endl;
	return 0;
}