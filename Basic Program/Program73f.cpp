#include <iostream>
//polymorphism - input / output operator overloading
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
	friend ostream& operator<<(ostream& output, StudInfo& out) {
		output << "Mark1 : " << out.mark1 << endl;
		output << "Mark2 : " << out.mark2 << endl;
		return output;
	}
	friend istream& operator>>(istream& input, StudInfo&in) {
		input >> in.mark1;
		input >> in.mark2;
		return input;
	}
};
int main() {
	StudInfo studInfo1, studInfo2;
	cout << "Enter Mark1 and Mark2 for 1st Student : ";
	cin >> studInfo1;
	cout << "Enter Mark1 and Mark2 for 1st Student : ";
	cin >> studInfo2;
	cout << studInfo1;
	cout << studInfo2;
	return 0;
}