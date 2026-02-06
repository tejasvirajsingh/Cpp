#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1,43,32,2,0,12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);   

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   return 0;
}
