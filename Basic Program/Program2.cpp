#include <iostream>
#include <string>

using namespace std;
int _age = 181;		//Global Variable

int main(){

	string _name;		//Local Variable
	unsigned int _age;		//Local Variable
	float _mark;		//Local Variable
	cout << "Enter Your Name : ";getline(cin, _name);
	cout << "Enter Your Age : ";cin >> _age;
	cout << "Enter Your Mark ";cin >> _mark;
	cout << "Your Name is : " << _name << endl;
	cout << "Your Age is : " << _age << endl;
	cout << "Your Mark is : " << _mark;
	
	return 0;
	
}