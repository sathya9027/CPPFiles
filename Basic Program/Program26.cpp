#include <iostream>
#include <string>
//nested do while loop statement
using namespace std;

int main() {
	int i = 1;

	do
	{
		int j = 1;
		cout << "Statement 1" << endl;
		do
		{
			cout << "Statement 2 " << endl;
			j++;
		} while (j<3);
		i++;

	} while (i<5);

	return 0;
}