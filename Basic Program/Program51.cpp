#include <iostream>
#include <string>
//structure using array
using namespace std;
struct StudentInfo {
	string name;
	int age;
	char sex;
	double marks;
};
int main() {
	StudentInfo sinfo[2];
	for (int i = 0;i < 2;i++) {
		cout << "Enter name : ";getline(cin, sinfo[i].name);
		cout << "Enter age : ";cin >> sinfo[i].age;
		cout << "Enter sex : ";cin >> sinfo[i].sex;
		cout << "Enter mark : ";cin >> sinfo[i].marks;
		cin.ignore();
		cout << "Your Name : " << sinfo[i].name << endl;
		cout << "Your Age : " << sinfo[i].age << endl;
		cout << "Your Sex : " << sinfo[i].sex << endl;
		cout << "Your Mark : " << sinfo[i].marks << endl;
	}
	return 0;
}