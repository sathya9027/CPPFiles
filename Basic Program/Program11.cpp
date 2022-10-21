#include <iostream>
#include <string>
//Bitwise Operator(&,|,<<,>>,^)
using namespace std;

int main() {

	int a = 3, b = 2;

	cout << "Logical AND : " << (a & b) << endl;
	cout << "Logical OR : " << (a | b) << endl;
	cout << "Logical Left Shift : " << (a >> 1) << endl;
	cout << "Logical Right Shift : " << (a << 1) << endl;
	cout << "Logical XOR : " << (a ^ b) << endl;

	return 0;
}