#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == key)
        return mid;

        else if(arr[mid] < key)
        start = mid +1;
        else 
        end = mid -1;
    }
    return -1;

}

int main(){
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order: ";
    for(int i = 0; i< n; i++)
    cin >> arr[i];

    int key;
    cout << "Enter Element to search: ";
    cin >> key;
     
    int result = binarySearch(arr, n, key);

    if(result != -1)
    cout << "Enter Found at index: " << result << endl;
    else 
      
     cout << "Element not found.." << endl;

     return 0;
}