#include <iostream>
using namespace std;
//Call by reference
int ChangeValue(int &x);
int main() {
	int a = 5;
	cout << "Value of a (Before in Main) : " << a << endl;
	ChangeValue(a);
	cout << "Value of a (After in Main) : " << a << endl;
	return 0;
}
int ChangeValue(int &x){
	cout << "Value of X (Before increment) : " << x << endl;
	x++;
	cout << "Value of X (After increment) : " << x << endl;
	return 0;
}