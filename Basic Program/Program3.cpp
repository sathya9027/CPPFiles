#include <iostream>
#include <string>

using namespace std;

enum game {
	player = 10,
	enemy = 12,
	obstacles = 18,
	coin,
	gun = 28
};

int main(){
	game games;
	games = player;
	cout << games << endl;
	
	return 0;
}