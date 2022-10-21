#include <iostream>
#include <string>
//structure using array
using namespace std;
struct StudentInfo {
	string name;
	int age = NULL;
	char sex = NULL;
	double marks = NULL;
};
int main() {
	StudentInfo sinfo;
	StudentInfo* ptr;
	ptr = &sinfo;
	cout << "Enter name : ";getline(cin, (*ptr).name);
	cout << "Enter age : ";cin >> ptr->age;
	cout << "Enter sex : ";cin >> ptr->sex;
	cout << "Enter mark : ";cin >> (*ptr).marks;
	cin.ignore();
	cout << "Your Name : " << (*ptr).name << endl;
	cout << "Your Age : " << (*ptr).age << endl;
	cout << "Your Sex : " << (*ptr).sex << endl;
	cout << "Your Mark : " << (*ptr).marks << endl;
	return 0;
}