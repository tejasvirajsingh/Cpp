#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 5;
    int c = 3;

    if (a >= b && a >= c)
    {
        cout << "Largest number is: " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Largest number is: " << b;
    }
    else
    {
        cout << "Largest number is: " << c;
    }

    return 0;
}
