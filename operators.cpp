#include <iostream>
using namespace std; 

int main(){
    int a, b;
    cout << "Enter Two Number: ";
    cin >> a >> b;
    


    // Arithmetic Operators

    cout << "Arithmetic Operators:"<< endl;
    cout << "a + b = " << (a +b)<< endl;
    cout << "a - b = " << (a -b) << endl;
    cout <<" a * b = "<< (a*b) << endl;
    cout << "a / b = "<< (a/b) << endl;
    cout <<"a % b = "<< (a%b) <<endl;


// Relational Operators

cout << "\nRelational Operators:" << endl;
cout << "a > b = " <<(a>b)<< endl;
cout << "a == b = " <<(a == b) << endl;
cout << "a ! = b = " << (a != b) << endl;


// Logical Operators

cout << "\nLogical Operators:" << endl;
cout <<"(a > 5 && b< 5) = "<< ((a > 5 && b < 5)) << endl;
cout <<"(a < 5 && b< 5) = "<< ((a <5 && b < 5)) << endl;
cout << "!(a>b) = "<< (!(a > b)) << endl;

// Assignment Operators

cout<< "\nAssignment Operators:" << endl;
int x =a;
x += b;
cout << "x += b -" << x << endl;
x -= b;
cout << "x -= b - "<< x << endl;

// Increment & Decrement

cout << "\nIncreament / Decrement:" << endl;
cout << "++a = " << ++a << endl;
cout << "b++ =  " << b++ << "(after Increment: "<< b << ")" << endl;
return 0;

}
