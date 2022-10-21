#include <iostream>
#include <string>
//structure using function
using namespace std;
struct StudentInfo {
	string name;
	int age = NULL;
	char sex = NULL;
	double marks = NULL;
};

void StudentDetails(StudentInfo s) {
	cout << "Student Details....." << endl;
	cout << "Your Name : " << s.name << endl;
	cout << "Your Age : " << s.age << endl;
	cout << "Your Sex : " << s.sex << endl;
	cout << "Your Mark : " << s.marks << endl;
}
void StudentInput(StudentInfo sinfos) {
	cout << "Student Input....." << endl;
	cout << "Enter name : ";getline(cin, sinfos.name);
	cout << "Enter age : ";cin >> sinfos.age;
	cout << "Enter sex : ";cin >> sinfos.sex;
	cout << "Enter mark : ";cin >> sinfos.marks;
	StudentDetails(sinfos);
}
int main() {
	StudentInfo sinfo;
	int stud;
	cout << "Enter no of students : ";cin >> stud;
	for (int i = 0;i < stud;i++) {
		cin.ignore();
		StudentInput(sinfo);
	}
	return 0;
}