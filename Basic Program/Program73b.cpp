#include <iostream>
//polymorphism - arithmetic operator overloading
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
	StudInfo operator +(const StudInfo &studInfoObj) {
		StudInfo studTotal;
		studTotal.mark1 = mark1 + studInfoObj.mark1;
		studTotal.mark2 = mark2 + studInfoObj.mark2;
		return studTotal;
	}
};
int main() {
	StudInfo studInfo1(90, 95), studInfo2(85, 90), total;
	studInfo1.Display();
	studInfo2.Display();
	total = studInfo1 + studInfo2;
	total.Display();
	return 0;
}