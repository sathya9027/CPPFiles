#include <iostream>
//polymorphism - function call operator overloading
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
	StudInfo operator ()(int m1, int m2) {
		StudInfo stud;
		stud.mark1 = m1;
		stud.mark2 = m2;
		return stud;
	}
};
int main() {
	StudInfo studInfo1(90, 95), studInfo2;
	studInfo1.Display();
	studInfo2 = studInfo1(80, 70);
	studInfo2.Display();
	return 0;
}