/* 

Given an array A[] and a number x, check for pair in A[] with sum as x.

Input : {1,2,4,3,5,6}
sum: 5
output : 2(1,4) & (2,3)


*/


#include <iostream>
#include <unordered_set>
using namespace std;

void findPairs(int arr[], int n, int x) {
    unordered_set<int> s;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int target = x - arr[i];

        if(s.find(target) != s.end()) {
            cout << "(" << target << ", " << arr[i] << ")" << endl;
            count++;
        }

        s.insert(arr[i]);
    }

    cout << "Total pairs: " << count << endl;
}

int main() {
    int arr[] = {1,2,4,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;

    findPairs(arr, n, x);

    return 0;
}