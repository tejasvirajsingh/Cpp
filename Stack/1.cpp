#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;

    st.push(10);
    st.push(39);
    st.push(32);
    st.push(22);
    st.push(55);
    st.push(98);
    st.push(44);

    st.pop();
    cout << st.size() << endl;
    cout << st.top();
}