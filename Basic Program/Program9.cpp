#include <iostream>
#include <string>
//Unary Operator(++,+,--,-)
using namespace std;

int main() {
	
	int a = 10, b;
	
	cout << "Unary + : " << +a << endl;		//10
	cout << "Unary - : " << -a << endl;		//-10
	
	b = ++a;
	
	cout << "Pre Unary ++ : " << a << endl;		//11
	cout << "Pre Unary ++ : " << b << endl;		//11
	
	b = a++;
	
	cout << "Post Unary ++ : " << a << endl;		//12
	cout << "Post Unary ++ : " << b << endl;		//11
	
	b = --a;
	
	cout << "Pre Unary -- : " << a << endl;		//11
	cout << "Pre Unary -- : " << b << endl;		//11
	
	b = a--;
	
	cout << "Post Unary -- : " << a << endl;		//10
	cout << "Post Unary -- : " << b << endl;		//11
	
	
	return 0;
}