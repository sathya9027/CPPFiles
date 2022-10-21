#include <iostream>
using namespace std;
//total of a student
void add(int m1, int m2,int stud) {
	int total = m1 + m2;
	cout << "Student "<< stud << " Total Marks : " << total << endl;
}
int main() {
	int i = 0;
	cout << "Enter number of students : ";cin >> i;
	for (int j=0;j < i;j++) {
		int mark1;
		int mark2;
		cout << "Enter First Mark : ";cin >> mark1;
		cout << "Enter Second Mark : ";cin >> mark2;
		add(mark1, mark2, j+1);
	}
}