#include <bits/stdc++.h>
using namespace std;

bool findSubarray(vector<int> &arr)
{

   
        for (int left = 0; left < arr.size(); left++)
        {

            int sum = 0;

            for (int right = left; right < arr.size(); right++)
            {

                sum += arr[right];

                if (sum == 0)
                {
                    return true;
                }
            }
        }

        return false;
    }
    
int main()
{

    // Example 1
    vector<int> arr1 = {4, 2, -3, 1, 6};
    cout << boolalpha << findSubarray(arr1) << endl;

    // Example 2
    vector<int> arr2 = {4, 2, 0, 1, 6};
    cout << boolalpha << findSubarray(arr2) << endl;

    // Example 3
    vector<int> arr3 = {-3, 2, 3, 1, 6};
    cout << boolalpha << findSubarray(arr3) << endl;

    return 0;
}