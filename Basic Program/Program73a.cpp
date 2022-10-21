#include <iostream>
//polymorphism - unary operator overloading
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
	}
	StudInfo operator -() {
		mark1 = -mark1;
		mark2 = -mark2;
		return StudInfo(mark1, mark2);
	}
};
int main() {
	StudInfo studInfo(90, 95);
	studInfo.Display();
	-studInfo;
	studInfo.Display();
	return 0;
}