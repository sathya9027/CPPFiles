#include <iostream>
//polymorphism - increment / decrement operator overloading
using namespace std;
class Time {
private:
	int hours;
	int minutes;
public:
	Time() {
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m) {
		hours = h;
		minutes = m;
	}
	void Display() {
		cout << "H : M = " << hours << " : " << minutes << endl;
	}
	Time operator++() {		//Pre Increment Operator Overloading
		++minutes;
		if (minutes > 59) {
			++hours;
			minutes -= 60;
		}
		return Time(hours, minutes);
	}
	Time operator++(int) {		//Post Increment Operator Overloading
		Time T(hours, minutes);
		minutes++;
		return T;
	}
};
int main() {
	Time t1(12, 58);
	t1.Display();
	++t1;
	t1.Display();
	++t1;
	t1.Display();
	t1++;
	t1.Display();
	return 0;
}