#include <iostream>
using namespace std;
//Array traverse
class Array {
private:
public:
	void Traverse(int a[], int n);
};
void Array::Traverse(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
int main() {
	Array arr;
	int num = 5, capacity;
	int ar[10] = { 10, 20, 30, 40, 50 };
	cout << "After creation: " << endl;
	arr.Traverse(ar, num);
	cout << "Array elements: " << num << endl;
	//capacity = sizeof(ar) / sizeof(ar[0]);
	//cout << "Capacity: " << capacity << endl;

	return 0;
}