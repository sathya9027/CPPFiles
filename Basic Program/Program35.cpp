#include <iostream>
using namespace std;
//total and avg of a student
int total(int m1, int m2, int stud) {
	int total = m1 + m2;
	cout << "Student " << stud << " Total Marks : " << total << endl;
	return total;
}
void avg(int total, int stud) {
	int avg = (total) / 2;
	cout << "Student " << stud << " Average Marks : " << avg << endl;
}
int main() {
	int i = 0;
	cout << "Enter number of students : ";cin >> i;
	for (int j = 0;j < i;j++) {
		int mark1;
		int mark2;
		cout << "Enter First Mark : ";cin >> mark1;
		cout << "Enter Second Mark : ";cin >> mark2;
		avg(total(mark1, mark2, j + 1), j + 1);
	}
}