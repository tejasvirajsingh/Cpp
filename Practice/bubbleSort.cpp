#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {

        for (int j = 0; j < n - i - 1; ++j) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int element : arr) {
        cout << element << " ";
    }
    cout << "\n";
}

int main() {

    vector<int> unsorted_array = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    printArray(unsorted_array);
    
    cout << "\n--- Sorting Process ---\n";

    bubbleSort(unsorted_array);

    cout << "Sorted array (using Bubble Sort): ";
    printArray(unsorted_array);

    cout << "\n====================================\n";
    cout << "        Time Complexity Analysis      \n";
    cout << "====================================\n";
    
    // Display the Time Complexity for Bubble Sort....
    cout << "Method Used: **Bubble Sort**\n";
    cout << "Time Complexity (Worst/Average): **O(n^2)**\n";
    cout << "Space Complexity: **O(1)**\n";
    
    return 0;
}