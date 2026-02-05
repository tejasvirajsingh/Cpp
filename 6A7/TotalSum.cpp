// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, -5, 6, -3, 8, -1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Maximum number in elements are: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }





// Finding maximum element in Arr

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 9,-3,5,-2,1,-44, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];   


      for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum number in elements : " << max;

    return 0;
}