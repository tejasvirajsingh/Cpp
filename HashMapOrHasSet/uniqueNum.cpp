#include<unordered_set>
#include<iostream>
using namespace std;
int main(){

    unordered_set<int>s;

    s.insert(42);
    s.insert(44);
    s.insert(53);
    s.insert(22);

    for(int x : s){
        cout<< x << " " ;
    }
}