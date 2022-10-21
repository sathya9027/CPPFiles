#include <iostream>
//pair swap, copy and comparison
using namespace std;
int main() {
	pair<int, char>pair1(10, 'A');
	pair<int, char>pair2;
	pair<int, char>pair3(pair1);
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
	cout << "Pair3" << endl;
	cout << pair3.first << " " << pair3.second << endl;
	//comparison
	cout << (pair2 != pair3) << endl;	//false print's 0
	cout << (pair2 == pair3) << endl;	//true print's 1
	return 0;
}