#include <iostream>
#include <tuple>
//tuple container concatenation
using namespace std;
int main() {
	tuple<int, char, double, string>tuple1(10, 'A', 34.456, "Game");	//method1 constructor
	tuple<int, char, double, string>tuple2;		//method2 normal
	tuple2 = make_tuple(20, 'B', 44.789, "Programming");
	int tuple1_size = tuple_size<decltype(tuple1)>::value;
	int tuple2_size = tuple_size<decltype(tuple2)>::value;
	cout << "Tuple1 Size: " << tuple1_size << endl;
	cout << "Tuple2 Size: " << tuple2_size << endl;
	cout << get<0>(tuple1) << " " << get<1>(tuple1) << " " <<
		get<2>(tuple1) << " " << get<3>(tuple1) << endl;
	cout << get<0>(tuple2) << " " << get<1>(tuple2) << " " <<
		get<2>(tuple2) << " " << get<3>(tuple2) << endl;
	//concatenation
	auto tuple3 = tuple_cat(tuple1, tuple2);
	int tuple3_size = tuple_size<decltype(tuple3)>::value;
	cout << "Combining tuple 1 and tuple 2 to tuple 3" << endl;
	cout << "Tuple3 Size: " << tuple3_size << endl;
	cout << get<0>(tuple3) << " " << get<1>(tuple3) << " " <<
		get<2>(tuple3) << " " << get<3>(tuple3) << " " <<
		get<4>(tuple3) << " " << get<5>(tuple3) << " " <<
		get<6>(tuple3) << " " << get<7>(tuple3) << endl;
	return 0;
}