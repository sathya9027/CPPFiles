#include <iostream>
//class and object
using namespace std;
class StudentInfo {
public:
	int mark1;
	int mark2;
	int total() {
		return mark1 + mark2;
	}
};
int main() {
	StudentInfo stud1, stud2;
	stud1.mark1 = 75;
	stud1.mark2 = 90;
	cout << "Total : " << stud1.total() << endl;
	stud2.mark1 = 70;
	stud2.mark2 = 80;
	cout << "Total : " << stud2.total() << endl;
	return 0;
}