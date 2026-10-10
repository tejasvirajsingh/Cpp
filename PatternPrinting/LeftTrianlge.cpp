#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < n - i; j++)
        {

            for (int j = 1; j <= n; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
