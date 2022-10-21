#include <iostream>
using namespace std;
//Array insertion
class Array {
private:
public:
	void Traverse(int a[], int n);
	void BackwardTraverse(int a[], int n);
	int InsertBegin(int a[], int n, int data, int cap);
	int DeleteBegin(int a[], int n);
	int DeleteEnd(int a[], int n);
	int InsertEnd(int a[], int n, int data, int cap);
	int DeleteElement(int a[], int n, int data);
	int SearchElement(int a[], int n, int data);
	int InsertAfter(int a[], int n, int data, int cap, int index);
	int InsertBefore(int a[], int n, int data, int cap, int index);
	int InsertAtPosition(int a[], int n, int data, int cap, int index);
	int UpdateElement(int a[], int n, int data, int index);
};
int Array::InsertAfter(int a[], int n, int data, int cap, int index) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert After)" << endl;
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
int Array::UpdateElement(int a[], int n, int data, int index) {
	a[index] = data;
	return n;
}
int Array::InsertBefore(int a[], int n, int data, int cap, int index) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert Before)" << endl;
		return n;
	}
	for (int i = (n - 1); i >= 0; i--)
	{
		if (i >= index - 1) {
			a[i + 1] = a[i];
		}
	}
	a[index - 1] = data;
	return n + 1;
}
int Array::InsertAtPosition(int a[], int n, int data, int cap, int index) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert At Position)" << endl;
		return n;
	}
	for (int i = (n - 1); i >= index; i--)
	{
		if (i >= index) {
			a[i + 1] = a[i];
		}
	}
	a[index] = data;
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
int Array::DeleteBegin(int a[], int n) {
	for (int i = 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	a[n - 1] = NULL;
	return n - 1;
}
int Array::DeleteEnd(int a[], int n) {
	a[n - 1] = NULL;
	return n - 1;
}
int Array::InsertEnd(int a[], int n, int data, int cap) {
	if (n >= cap) {
		cout << "Array is Full, Can't insert element (Insert End)" << endl;
		return n;
	}
	a[n] = data;
	return n + 1;
}
int Array::DeleteElement(int a[], int n, int data) {
	int del = SearchElement(a, n, data);
	if (del == -1) {
		cout << "Element not found (Delete Element)" << endl;
		return n;
	}
	for (int i = del; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	return n - 1;
}
int Array::SearchElement(int a[], int n, int data) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == data) {
			return i;
		}
	}
	return -1;
}
void Array::Traverse(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void Array::BackwardTraverse(int a[], int n) {
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	Array arr;
	int num = 5, capacity, index;
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
	num = arr.InsertBefore(ar, num, 90, capacity, 3);		//insertion at before
	cout << "Before insertion (before): ";
	arr.Traverse(ar, num);
	num = arr.InsertAtPosition(ar, num, 100, capacity, 1);		//insertion at position
	cout << "Insertion (at position): ";
	arr.Traverse(ar, num);
	num = arr.UpdateElement(ar, num, 110, 0);		//insertion at update
	cout << "Insertion (update): ";
	arr.Traverse(ar, num);
	num = arr.DeleteBegin(ar, num);	//deletion at start
	cout << "Before deletion (beginning): ";
	arr.Traverse(ar, num);
	num = arr.DeleteEnd(ar, num);	//deletion at end
	cout << "After deletion (end): ";
	arr.Traverse(ar, num);
	index = arr.SearchElement(ar, num, 100);	//searching a element
	if (index == -1) {
		cout << "Element not found (search)" << endl;
	}
	else {
		cout << "Element found at Index: " << index << endl;
	}
	num = arr.DeleteElement(ar, num, 90);	//deletion a element
	cout << "After deletion (element): ";
	arr.Traverse(ar, num);
	cout << "After traverse(backward): ";
	arr.BackwardTraverse(ar, num);		//backward traverse
	return 0;
}