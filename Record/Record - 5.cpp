#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of testcases : ";cin >> n;
    while (n--)
    {
        int a;
        cout << "Enter no of students : ";cin >> a;
        int* ptr;
        ptr = new int[a];
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            cout << "Enter score of the student : ";cin >> ptr[i];
        }
        for (int i = 0; i < a; i++)
        {
            int count = 0;
            for (int j = 0; j < a; j++)
            {
                if (ptr[i] < ptr[j])
                    count++;
            }
            if (count < a - count)
                sum++;
        }
        cout << sum << endl;
    }

    return 0;
}