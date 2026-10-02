#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char> st1;
    stack<char> st2;

    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '#') {
            st1.push(s[i]);
        }
        else {
            if (!st1.empty()) {
                st1.pop();
            }
        }
    }

    
    for (int i = 0; i < t.length(); i++) {
        if (t[i] != '#') {
            st2.push(t[i]);
        }
        else {
            if (!st2.empty()) {
                st2.pop();
            }
        }
    }

    return st1 == st2;
}

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    if (backspaceCompare(s, t)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}