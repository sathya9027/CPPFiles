#include <iostream>
using namespace std;
//random function
int main() {
	srand((unsigned)time(NULL));
	int random = (rand() % 10) + 1;
	cout << "Random no : " << random << endl;
	return 0;
}