#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int k)
{

    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] != k)
            {
                j++;
            }
            else
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{

    vector<int> arr = {1, 1, 1, 1};
    int k = 2;

    cout << countPairs(arr, k) << endl;

    return 0;
}