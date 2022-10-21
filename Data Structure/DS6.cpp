#include <iostream>
#include <tuple>
//tuple container swap
using namespace std;
int main() {
	tuple<int, char, double, string>tuple1(10, 'A', 34.456, "Game");	//method1 constructor
	tuple<int, char, double, string>tuple2;		//method2 normal
	tuple2 = make_tuple(20, 'B', 44.789, "Programming");
	cout << "Before Swaping" << endl;
	cout << get<0>(tuple1) << " " << get<1>(tuple1) << " " <<
		get<2>(tuple1) << " " << get<3>(tuple1) << endl;
	cout << get<0>(tuple2) << " " << get<1>(tuple2) << " " <<
		get<2>(tuple2) << " " << get<3>(tuple2) << endl;
	tuple1.swap(tuple2);	//swaping tuple1 and tuple2
	cout << "After Swaping" << endl;
	cout << get<0>(tuple1) << " " << get<1>(tuple1) << " " <<
		get<2>(tuple1) << " " << get<3>(tuple1) << endl;
	cout << get<0>(tuple2) << " " << get<1>(tuple2) << " " <<
		get<2>(tuple2) << " " << get<3>(tuple2) << endl;
	return 0;
}