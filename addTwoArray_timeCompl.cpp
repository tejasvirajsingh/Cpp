#include <iostream>
#include<vector>

using namespace std;

vector<int> addArray(const vector<int>& arr1, const vector<int> & arr2){
    int maxLength = max(arr1.size(), arr2.size());
    vector<int> result(maxLength);
     
    for (int i =0; i< maxLength; i++){
        int val1 = (i < arr1.size()) ? arr1[i] : 0;
        int val2 = (i < arr2.size()) ? arr2[i] : 0;
        result[i] = val1 + val2;

    }
    return result;
}

   int main(){
    vector<int> array1 = {1,3,4,5};
    vector<int> array2 = {4,9,8,7,3};

    vector<int> sumArray = addArray(array1, array2);

    cout << "====== Array Addition Result ======\n";
    cout << "Array 1 : ";
    for (int x : array1) cout << x << " ";

    cout << "\nArray 2 : ";
    for (int x : array2) cout << x << " ";
    
    cout << "\n\nSum of Arrays: ";
    for (int x : sumArray) cout << x << " ";
    cout << "\n----------------------------\n";


    int n = array1.size(), m = array2.size();
    cout << "For n = " << n << " and m = " << m << " :\n";
     cout << "➡ Time Complexity = O(max(n, m)) = O(" << max(n, m) << ")\n";
    cout << "➡ Space Complexity = O(max(n, m)) = O(" << max(n, m) << ")\n";
    

    cout << "==============================\n";

    return 0;
   }