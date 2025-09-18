#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter " << n << " Element: ";
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }

    cout << "\nArray Element with Index Location: " << endl;
    for(int i = 0; i <n; i++){
        cout << "Index " << i << " -> " << arr[i] << endl;

    }
    return 0;
}