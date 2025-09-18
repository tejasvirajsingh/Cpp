#include<iostream>
using namespace std;

int main(){
    int arr[5]  = {10, 20, 30, 40, 50};

    cout << "Array Elements are: 5 " << endl;

    for (int i = 0; i< 5; i++){
        cout << "Element at index "<< i << " = " << arr[i] << endl;

    }
    return 0;
}