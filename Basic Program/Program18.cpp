#include <iostream>
#include <string>
//switch statement
using namespace std;

int main() {

	char grade;

	cout << "Enter the grade : ";cin >> grade;

	switch (grade)
	{
	case 'A':
		cout << "Excellent" << endl;
		break;

	case 'B':
		cout << "Good" << endl;
		break;

	case 'C':
		cout << "Above Average" << endl;
		break;

	case 'D':
		cout << "Below Average" << endl;
		break;

	case 'E':
		cout << "Poor" << endl;
		break;

	default:
		cout << "Invalid Output" << endl;
		break;
	}

	return 0;
}