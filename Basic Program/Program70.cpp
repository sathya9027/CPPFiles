#include <iostream>
//abstraction
using namespace std;
class Abstraction {
private:
	int mark;
public:
	void SetMark(int m) {
		mark = m;
		Display();
	}
	void Display() {
		cout << "Mark : " << mark << endl;
	}
};
int main() {
	Abstraction abs;
	abs.SetMark(100);
	return 0;
}