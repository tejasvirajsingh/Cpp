#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        // Input array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Your logic
        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++) {

            if (arr[i] == k) {

                if (first == -1) {
                    first = i;
                }

                last = i;
            }
        }

        cout << first << " " << last << endl;
    }

    return 0;
}