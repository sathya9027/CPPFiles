#include <iostream>
#include <string>
//extern1
using namespace std;
int a;
extern void display();

int main() {
	
	a = 5;
	cout << "Value of a1 : " << a << endl;

	display();

	return 0;
}