// Given a string with or without special character findif it is palindrome or not.. no splitting of array must be done or no additional space must be used for storing the array.

// eg : 1  Race Car true eg: 2 I DID , DID I ?

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {

        while (left < right && !isalnum(str[left]))
        {
            left++;
        }

        while (left < right && !isalnum(str[right]))
        {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right]))
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    if (isPalindrome(str))
    {
        cout << "True (Palindrome)" << endl;
    }
    else
    {
        cout << "False (Not Palindrome)" << endl;
    }

    return 0;
}