
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;

    cout << "Enter a Number of Star: ";
    cin >> n;

    for (int i = 1; i <= (2 * n) - 1; i++) {

        if (i == 1) {
            for (int j = 1; j <= (2 * n) - 1; j++) {
                if (j == 1 || j >= n)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        else if (i > 1 && i < n) {
            for (int j = 1; j <= (2 * n) - 1; j++) {
                if (j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        else if (i == n) {
            for (int j = 1; j <= (2 * n) - 1; j++) {
                cout << "* ";
            }
        }
        else if (i > n && i < (2 * n) - 1) {
            for (int j = 1; j <= (2 * n) - 1; j++) {
                if (j == n || j == (2 * n) - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        else if (i == (2 * n) - 1) {
            for (int j = 1; j <= (2 * n) - 1; j++) {
                if (j <= n || j == (2 * n) - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }

        cout << "\n";
    }

    return 0;
}
