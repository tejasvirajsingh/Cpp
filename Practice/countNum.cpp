#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int count = 0;

   while(num>0){
    count++;
    num=num/10;
   }


    cout<<"Num of Count = " << count;

    return 0;
}
