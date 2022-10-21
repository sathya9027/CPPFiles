#include <iostream>
//class and object
using namespace std;
class StudentInfo {
public:
	int mark1;
	int mark2;
};
int main() {
	StudentInfo stud;
	int total;
	stud.mark1 = 10;
	stud.mark2 = 80;
	total = stud.mark1 + stud.mark2;
	cout << total;
	return 0;
}