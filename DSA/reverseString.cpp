#include <iostream>
using namespace std;

int main()
{

    string name = "Harsh";
    int n = name.length();

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
    cout << name;

    return 0;
}