// Finding Odd and Even NUmbers

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {2, 5, 8, 7, 10, 13};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int evenCount = 0, oddCount = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     cout << "Even numbers count: " << evenCount << endl;
//     cout << "Odd numbers count: " << oddCount << endl;

//     return 0;
// }







// COunt the Duplicate Number 

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;  
            }
        }
    }

    cout << "Total duplicate elements count: " << duplicateCount << endl;

    return 0;
}
