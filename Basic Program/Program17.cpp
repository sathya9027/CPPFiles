#include <iostream>
#include <string>
//else if statement
using namespace std;

int main() {

	int marks;

	cout << "Enter the mark : ";cin >> marks;

	if (marks >= 75) {
		cout << "Your have passed with Distinction" << endl;
	}
	else if(marks>30){
		cout << "You have passed with average mark" << endl;
	}
	else if (marks == 30) {
		cout << "You have just passed" << endl;
	}
	else {
		cout << "You have failed" << endl;
	}

	return 0;
}