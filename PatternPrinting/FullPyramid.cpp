#include <iostream>
using namespace std;

int main()
{
    // Number of rows
    int N = 5;

    // Outer loop runs N times, once for each row
    for (int i = 1; i <= N; i++) {
          // Inner loop prints 'N - i' spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
          
        // Inner loop prints '2 * i - 1' stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
     
        cout << "\n";
    }

    return 0;
}