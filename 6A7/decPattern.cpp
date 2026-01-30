#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int cols = 4;

    for (int i = 0; i < rows; i++)
    {
        // print spaces on left
        for (int space = 0; space < i; space++)
        {
            cout << "  ";
        }

        // print stars
        for (int star = 0; star < cols - i; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
