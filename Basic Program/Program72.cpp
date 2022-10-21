#include <iostream>
//polymorphism - function overloading
using namespace std;
class StudInfo {
public:
	void StudData() {
		cout << "Printing Student Info.... " << endl;
	}
	void StudData(int mark){
		cout << "Printing Student Mark in integer.... " << mark << endl;
	}
	void StudData(double percentage) {
		cout << "Printing Student Percentage in double.... " << percentage << endl;
	}
	void StudData(float percentage) {
		cout << "Printing Student Percentage in float.... " << percentage << endl;
	}
	void StudData(int age, char sex) {
		cout << "Printing Student Age and Sex.... " << age << sex << endl;
	}
};
int main() {
	StudInfo studInfo;
	studInfo.StudData();
	studInfo.StudData(100);
	studInfo.StudData(19, 'M');
	studInfo.StudData(98.50);
	studInfo.StudData(98.50f);
	return 0;
}