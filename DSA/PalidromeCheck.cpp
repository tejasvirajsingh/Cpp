#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;

    cout << "Enter number of test cases: ";
    cin >> T;

    while (T--)
    {

        int n;

        cout << "Enter number: ";
        cin >> n;

        int original = n;
        int reversed = 0;

        while (n != 0)
        {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }

        if (original == reversed)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}