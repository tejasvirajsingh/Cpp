#include<unordered_set>
#include<iostream>
using namespace std;
int main(){

    unordered_set<int>s;

    s.insert(42);
    s.insert(44);
    s.insert(22);
    s.insert(20);
    s.insert(4);
    s.insert(53);
    s.insert(22);

    int target = 4;

    if(s.find(target) != s.end()){
        cout<<"Target is Founded."<<endl;
    }
    else 
    cout<< "Not Found."<<endl;

    cout<<"The Size of Set is :" <<s.size()<<endl;

    for(int x : s){
        cout<< x << " " ;
    }
}