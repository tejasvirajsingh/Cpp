#include<iostream>

using namespace std;

int linearSearch(int arr[], int n , int key){
    for(int i = 0; i<n;i++){
        if(arr[i] == key){
            return i;

        }
    }

    return -1;

}
int main(){
    int n, key;


    cout << "Enter Number Of Elements: ";
    cin >> n;

    int arr[n];

    cout << "ENter " << n << "elements: ";
    for(int i = 0; i< n;i++){
        cin >> arr[i];
    }

    cout << "ENter element to Search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if(result != -1){
        cout << "Element Foundat index:  " << result;
    } else {
        cout << "Element not found!";
    }
    return 0;
}