#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  if (n > 0)
  {
    cout << "It is positive number" << endl;
  }
  else if (n == 0)
  {
    cout << "it non positive or nor negative" << endl;
  }
  else
  {
    cout << "It is negative num";
  }
  return 0;
}