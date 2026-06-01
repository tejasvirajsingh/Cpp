#include <iostream>
using namespace std;

int main() {
    int num = 5648;
    int RevNum = 0;

    while (num > 0) {
        int digit = num % 10;          // get last digit
        RevNum = RevNum * 10 + digit;  // build reverse number
        num = num / 10;                // remove last digit
    }

    cout << "Reversed Number = " << RevNum;

    return 0;
}