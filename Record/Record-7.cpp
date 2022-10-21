#include <iostream>
using namespace std;

int main() {
    int test;
    cout << "Enter no of testcases : ";
    cin >> test;
    while (test--) {
        int x, y;
        cout << "Enter 'X' no of coins : ";cin >> x;
        cout << "Enter 'Y' no of coins : ";cin >> y;

        if (x == 0 && y % 2 == 0) {
            cout << "Yes" << endl;
        }
        else if (x == 0 && y % 2 != 0) {
            cout << "NO" << endl;
        }
        else if ((x + (2 * y)) % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}