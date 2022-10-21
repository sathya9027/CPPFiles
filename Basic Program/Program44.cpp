#include <iostream>
//sum of an array and average of an array
using namespace std;
int Total(int j[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		cout << "a[" << i << "] : " << j[i] << endl;
		total += j[i];
	}
	cout << "Total : " << total << endl;
	return total;
}
float Avg(float total, float size) {
	float avg = total / size;
	cout << "Average : " << avg << endl;
	return avg;
}
int main() {
	int add = 0;
	int max = 0;
	int a[5];
	int sizeofvar = size(a);
	for (int i = 0; i < size(a); i++) {
		cout << "Enter " << i+1 << " number : ";cin >> a[i];
	}
	Avg(Total(a, sizeofvar), sizeofvar);
	return 0;
}