#include<iostream>
using namespace std;

int main() {

    int arr[5] = {5, 8, 4, 1, 3};

    int n = 5;

    // Ascending Sorting
    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] > arr[j]) {

                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Ascending Order: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}