#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 3,4, 7,8,9,1,3,9, 1, 17};
    int n = nums.size();

    int min = nums[0];
    int max = nums[0];

    for(int i = 0; i < n; i++) {
        if(nums[i] < min) {
            min = nums[i];
        }

        if(nums[i] > max) {
            max = nums[i];
        }
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}