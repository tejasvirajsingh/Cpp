#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr)
{

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return arr[i + 1];
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << secondLargest(arr) << endl;

    return 0;
}