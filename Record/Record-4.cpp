# include <iostream>
using namespace std;
int main()
{
	int T;
	cout << "Enter number of testcases:";
	cin >> T;
	while (T--)
	{
		int N;
		cout << "No of rows and columns: ";
		cin >> N;
		for (int i = 1;i <= N;i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (i == 2 && j == 2)
				{
					cout << "Q ";
				}
				else if (i >= 4 && j == i)
				{
					cout << "Q ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}