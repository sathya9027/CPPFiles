//Array using STL//Data Structure
#include <iostream>
#include <array>
#include "Array.h"
#include "Vector.h"
using namespace std;
int main() {
	/*Array arr;
	arr.TypesOfArrays();*/
	//Array using STL
	array<int, 5> marks = { 70,80,90,50,60 };
	for (int i = 0; i < marks.size(); i++)
	{
		cout << marks.at(i) << " ";
	}
	cout << endl;
	cout << "First element: " << marks.front() << endl;
	cout << "Last element: " << marks.back() << endl;
	cout << "Size of the array: " << marks.size() << endl;
	cout << "Max Size of the array: " << marks.max_size() << endl;
	if (marks.empty()) {
		cout << "Array is empty!!!" << endl;
	}
	else {
		cout << "Array is not empty!!!" << endl;
	}
	cout << "Before swaping" << endl;
	marks.fill(20);
	for (int i = 0; i < marks.size(); i++)
	{
		cout << marks.at(i) << " ";
	}
	cout << endl;
	array<int, 5> dupMarks = { 70,80,90,50,60 };
	cout << "After swaping" << endl;
	marks.swap(dupMarks);
	for (int i = 0; i < marks.size(); i++)
	{
		cout << marks.at(i) << " ";
	}
	cout << endl;
	return 0;
}