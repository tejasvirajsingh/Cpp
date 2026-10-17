#include <bits/stdc++.h>
using namespace std;

vector<int> moveNegative(vector<int>& arr) {
    
    int j=0;
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] >= 0  ){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    
    return arr;
}

int main() {
    
    vector<int> arr1 = {-1, 3, -2, 4, 5, -3};
    vector<int> result1 = moveNegative(arr1);
    cout << "Test Case 1: ";
    for (int x : result1) cout << x << " ";
    cout << endl;

    
    
    vector<int> arr2 = {1, -2, 3,0,2,3,6,4,3,-3,0,2, -4, 5, -6};
    vector<int> result2 = moveNegative(arr2);
    cout << "Test Case 2: ";
    for (int x : result2) cout << x << " ";
    cout << endl;

    
    vector<int> arr3 = {-1, -2, -3, 4, 5};
    vector<int> result3 = moveNegative(arr3);
    cout << "Test Case 3: ";
    for (int x : result3) cout << x << " ";
    cout << endl;

    return 0;
}