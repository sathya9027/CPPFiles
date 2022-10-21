#include <iostream>
//class and object - private
using namespace std;
class StudentInfo {
private:
	int mark1;
	int mark2;
	void SetMark1(int m1);
	void SetMark2(int m2);
	int Total();
};
void StudentInfo::SetMark1(int m1) {
	mark1 = m1;
}
void StudentInfo::SetMark2(int m2) {
	mark2 = m2;
}
int StudentInfo :: Total() {
	return mark1 + mark2;
}
int main() {
	StudentInfo stud1;
	stud1.SetMark1(80);		//Error(private)
	stud1.SetMark2(90);		//Error(private)
	cout << "Total : " << stud1.Total() << endl;		//Error(private)
	return 0;
}