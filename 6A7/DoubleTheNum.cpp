// Given an array of intergers of size n. COnvert the array in such a way that if next valid numebr is same as current numebr, double its value and replace the next numebr with 0. After the nodifiaction , rearrange the array such that all 0's are shifted to the end .

// Eg.  arr [] = {2,2,0,4,0,8}  out : 4 4 8 0 0 0   Eg: arr [] = { 0,2,2,2,0,6,6,0,0,8} out: 4,2,12,8,0,0,0,0,0,0.

#include <iostream>
using namespace std;

void modifyArray(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != 0 && arr[i] == arr[i + 1])
        {
            arr[i] = 2 * arr[i];
            arr[i + 1] = 0;
        }
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }

    while (j < n)
    {
        arr[j++] = 0;
    }
}

int main()
{
    int arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    modifyArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}