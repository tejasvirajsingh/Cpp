#include <iostream>
using namespace std;

int main() {
    int arr[] = {-3, 5, -1,9,8,4, 7, 0, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
