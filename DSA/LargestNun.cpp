#include <iostream>
#include <vector>
using namespace std;

int findLargestIndex(vector<int>& nums) {
    int maxValue = nums[0];
    int index = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxValue) {
            maxValue = nums[i];
            index = i;
        }
    }

    return index;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Index of largest element: "
         << findLargestIndex(nums) << endl;

    return 0;
}