#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a %b;
        a = temp;

    }
    return a;
}
int main(){
    int a, b;
    cout << "Enter Two Nubmber: ";
    cin >> a >> b;

    int h = gcd(a,b);
    int l = (a * b)/ h;

    cout << "HCF = " << h << endl;
    cout << "LCM = " << l;

    return 0;
}