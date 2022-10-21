#include <iostream>
//pattern
using namespace std;
int main() {
	int t;
	cout << "Enter no of testcases : ";cin >> t;
	while (t--) {
		int n, x, k;
		cout << "Enter number of characteristics : ";
		cin >> n;
		cout << "Enter minimum number of characteristics : ";
		cin >> x;
		cout << "Enter maximum possible score difference : ";
		cin >> k;
		int* a, * b;
		a = new int[n];
		b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (abs(a[i] - b[i]) <= k) {
				cnt++;
			}
		}
		if (cnt >= x) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}