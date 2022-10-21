#include <iostream>
//polymorphism - assignment operator overloading
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
	void operator =(const StudInfo &studInfoObj) {
		mark1 = studInfoObj.mark1;
		mark2 = studInfoObj.mark2;
	}
};
int main() {
	StudInfo studInfo1(90, 95), studInfo2;
	studInfo1.Display();
	studInfo2 = studInfo1;
	studInfo2.Display();
	return 0;
}