#include <iostream>
#include <string>
//structure
using namespace std;
struct StudentInfo {
	string name;
	int age;
	char sex;
	double marks;
};
int main() {
	StudentInfo sinfo;
	int stud;
	cout << "Enter No of Students : ";cin >> stud;
	for (int i = 0;i < stud;i++) {
		cout << "Enter name : ";getline(cin, sinfo.name);
		cout << "Enter age : ";cin >> sinfo.age;
		cout << "Enter sex : ";cin >> sinfo.sex;
		cout << "Enter mark : ";cin >> sinfo.marks;
		cout << "Your Name : " << sinfo.name << endl;
		cout << "Your Age : " << sinfo.age << endl;
		cout << "Your Sex : " << sinfo.sex << endl;
		cout << "Your Mark : " << sinfo.marks << endl;
	}
	return 0;
}