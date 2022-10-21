#include <iostream>
#include <tuple>
//tuple container
using namespace std;
int main() {
	tuple<int, char, double, string>tuple1(10, 'A', 34.456, "Game");	//method1 constructor
	tuple<int, char, double, string>tuple2;		//method2 normal
	tuple<int, char, double>tuple3;		//method3 get_method
	tuple2 = make_tuple(20, 'B', 44.789, "Programming");
	get<0>(tuple3) = 30;
	get<1>(tuple3) = 'C';
	get<2>(tuple3) = 24.854;
	cout << get<0>(tuple1) << " " << get<1>(tuple1) << " " <<
		get<2>(tuple1) << " " << get<3>(tuple1) << endl;
	cout << get<0>(tuple2) << " " << get<1>(tuple2) << " " <<
		get<2>(tuple2) << " " << get<3>(tuple2) << endl;
	cout << get<0>(tuple3) << " " << get<1>(tuple3) << " " <<
		get<2>(tuple3) << endl;
	return 0;
}