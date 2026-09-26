#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter no: ";
    cin>> n;

    int nst = 1;
    int nsp = n-1;

    for(int i=1;i<2*n-1;i++){

        for(int j=1;j<nsp;j++){
            cout<<" ";
            if(n<nsp)
            nsp++;
            else 
            nsp--;
        }
        for(int k=1;k<nsp;k++){
            if(n<nst){
                nst--;
            }
            cout<<"*";
        }
        cout<<endl;
    }
}