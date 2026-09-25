#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of Print star stair.";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*((i+1)/2); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}