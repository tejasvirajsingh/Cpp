#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = " Harsh singh is mortal";

    stringstream ss(s);
    string word;

    vector<string>arr;

    while(ss >> word){
        arr.push_back(word);
    }
        cout << arr.size() << endl;

        for(int i=0;i<arr.size();i++){
            cout<<arr[i] << endl;
        }

    return 0;

}