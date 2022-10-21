#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of signed int : " << sizeof(signed int) << endl;
	cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
	cout << "Size of string : " << sizeof(string) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of long double : " << sizeof(long double) << endl;
	cout << "Size of bool : " << sizeof(bool) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)<< endl;
	cout << "Size of char : " << sizeof(char) << endl;
	
	return 0;
}