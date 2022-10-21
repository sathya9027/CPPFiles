#include <iostream>
//class and object
using namespace std;
class StudentInfo {
public:
	int mark1;
	int mark2;
	int total();
};
int StudentInfo :: total() {	
	return mark1 + mark2;
}
int main() {
	StudentInfo stud1;
	stud1.mark1 = 80;
	stud1.mark2 = 90;
	cout << "Total : " << stud1.total() << endl;
	return 0;
}