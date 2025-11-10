#include <iostream>
#include <vector>
#include <iterator>

// Function to merge two sorted sub-arrays
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left sub-array
    int n2 = right - mid;    // Size of the right sub-array

    // Create temporary arrays
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first sub-array
    int j = 0; // Initial index of second sub-array
    int k = left; // Initial index of merged sub-array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that implements MergeSort
// left is for the left index and right is the right index of the sub-array of arr to be sorted
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return; // Base case: If the array has 0 or 1 element, it is already sorted
    }
    
    int mid = left + (right - left) / 2; // Calculate the middle index
    
    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    
    // Merge the sorted halves
    merge(arr, left, mid, right);
}

// Function to print the array (for testing)
void printArray(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

// Driver code to test the function
int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    std::cout << "Given array is \n";
    printArray(arr);

    // Call the Merge Sort function
    mergeSort(arr, 0, arr_size - 1);

    std::cout << "\nSorted array is \n";
    printArray(arr);
    
    return 0;
}