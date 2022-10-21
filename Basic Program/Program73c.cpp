#include <iostream>
//polymorphism - relational operator overloading
using namespace std;
class StudInfo {
private:
	int mark1;
	int mark2;
public:
	StudInfo() {
		mark1 = 0;
		mark2 = 0;
	}
	StudInfo(int m1, int m2) {
		mark1 = m1;
		mark2 = m2;
	}
	void Display() {
		cout << "Mark1 : " << mark1 << endl;
		cout << "Mark2 : " << mark2 << endl;
		cout << endl;
	}
	bool operator <(const StudInfo &studInfoObj) {
		if (mark1 < studInfoObj.mark1) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	StudInfo studInfo1(90, 95), studInfo2(85, 90), total;
	studInfo1.Display();
	studInfo2.Display();
	if (studInfo1 < studInfo2) {
		cout << "Stud2 is greater than Stud1...." << endl;
	}
	else {
		cout << "Stud1 is greater than Stud2...." << endl;
	}
	return 0;
}