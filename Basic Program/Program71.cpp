#include <iostream>
//encapsulation
using namespace std;
class Encapsulation {
private:
	int mark;
public:
	int SetMark(int m) {
		mark = m;
		return GetMark();
	}
	int GetMark() {
		return mark;
	}
};
int main() {
	Encapsulation encap;
	cout << "Mark : " << encap.SetMark(100) << endl;
	return 0;
}