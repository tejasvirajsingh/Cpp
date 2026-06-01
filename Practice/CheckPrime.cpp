#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a num: ";
    cin >> n;

    bool flag = true;

    if(n <= 1) {
        flag = false;
    }

    for(int i = 2; i < n; i++) {

        if(n % i == 0) {
            flag = false;
            break;
        }
    }

    if(flag == true) {
        cout << "It is prime number";
    }

    else {
        cout << "It is composite number";
    }

    return 0;
}