#include <iostream>
#include <string>
//nested if else statement
using namespace std;

int main() {

	int age = 19;
	string nationality = "Indian";

	if (age > 18) {
		if (nationality == "Indian") {
			cout << "You are eligible to vote!!!" << endl;
		}
		else {
			cout << "You are not eligibe to vote because your nationality is not India" << endl;
		}
	}
	else {
		cout << "You are not eligible to vote because you are below 18 years old" << endl;
	}

	return 0;
}