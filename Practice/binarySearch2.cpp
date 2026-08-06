#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n -1;
     
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        return mid;

        else if(arr[mid] < key)
        low = mid +1;
        
          else
         
          high = mid -1;


    }
    return -1;

}
int main(){
    int n;
    cout << "Enter the number of Elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " Elements (sorted): ";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int pos = binarySearch(arr, n , key);

    if(pos != -1)
    cout << "Element " << key << " Found at Position " << pos + 1 << endl;
    else 

    cout << "Element not found in the Array." << endl;

    return 0 ;
    
}