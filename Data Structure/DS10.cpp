#include <iostream>
using namespace std;
//Array insertion
class Array {
private:
public:
	void Traverse(int a[], int n);
	int InsertBegin(int a[], int n, int data, int cap);
	int InsertEnd(int a[], int n, int data, int cap);
	int InsertAfter(int a[], int n, int data, int cap, int index);
};
int Array::InsertAfter(int a[], int n, int data, int cap, int index) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert Begin)" << endl;
		return n;
	}
	for (int i = (n - 1); i >= 0; i--)
	{
		if (i >= index) {
			a[i + 1] = a[i];
		}
	}
	a[index + 1] = data;
	return n + 1;
}
int Array::InsertBegin(int a[], int n, int data, int cap) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert Begin)" << endl;
		return n;
	}
	for (int i = (n - 1); i >= 0; i--)
	{
		a[i + 1] = a[i];
	}
	a[0] = data;
	return n + 1;
}
int Array::InsertEnd(int a[], int n, int data, int cap) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert End)" << endl;
		return n;
	}
	a[n] = data;
	return n + 1;
}
void Array::Traverse(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	Array arr;
	int num = 5, capacity;
	int ar[10] = { 10, 20, 30, 40, 50 };
	capacity = sizeof(ar) / sizeof(ar[0]);
	cout << "Array size: " << capacity << endl;
	cout << "After creation: ";
	arr.Traverse(ar, num);
	cout << "Total elements: " << num << endl;
	num = arr.InsertBegin(ar, num, 60, capacity);	//insertion at start
	cout << "After insertion (beginning): ";
	arr.Traverse(ar, num);
	cout << "Total elements: " << num << endl;
	num = arr.InsertEnd(ar, num, 70, capacity);		//insertion at end
	cout << "After insertion (ending): ";
	arr.Traverse(ar, num);
	num = arr.InsertAfter(ar, num, 80, capacity, 3);		//insertion at after
	cout << "After insertion (after): ";
	arr.Traverse(ar, num);
	return 0;
}