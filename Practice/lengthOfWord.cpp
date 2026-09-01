// Count how many words have length greater than 3.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "I love data structures with daily consistency.";

    stringstream ss(s);
    string word;

    vector<string> ans;

    while (ss >> word)
    {
        ans.push_back(word);
    }

    int count = 0;

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i].size() > 3)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}