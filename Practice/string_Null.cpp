#include<iostream>
using namespace std;

int main(){
    string name;

    cout<< "Enter your name " <<endl;
    cin>> name;

    cout << "Your name is ";
    cout<< name <<endl;
        int n  = sizeof(name) / sizeof(name[0]);

        cout<<n;
    return 0;
}