#include <iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        while (num >= 10)
        {
            int sum = 0;

            while (num > 0)
            {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }
};

int main()
{
    Solution obj;

    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Answer: " << obj.addDigits(num);

    return 0;
}