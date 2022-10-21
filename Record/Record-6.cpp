#include<iostream>
using namespace std;
int main()
{
    int t;
    cout << "Enter no of testcases : ";cin >> t;
    while (t--) {
        int a, b, x, y, k, petrolPrice, dieselPrice;
        cout << "Enter current petrol price : ";
        cin >> x;
        cout << "Enter current diesel price : ";
        cin >> y;
        cout << "Enter increase in petrol price : ";
        cin >> a;
        cout << "Enter increase in diesel price : ";
        cin >> b;
        cout << "Enter no of months : ";
        cin >> k;
        petrolPrice = x + (a * k);
        dieselPrice = y + (b * k);

        if (petrolPrice < dieselPrice) {
            cout << "PETROL" << endl;
        }
        else if (dieselPrice < petrolPrice) {
            cout << "DIESEL" << endl;
        }
        else {
            cout << "SAME PRICE" << endl;
        }
    }

    return 0;
}