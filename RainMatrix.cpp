#include<iostream>
#include<cstdlib>
#include<ctime>
#include<thread>
#include<chrono>

using namespace std;

int main(){

srand(time(NULL));

while(true){
    for(int i = 0; i<120; i++){
        int r = rand() % 20;

        if (r == 1)
        cout << char(33 + rand() % 93);
        else
         cout << " ";

    }
    cout << endl;

std::this_thread::sleep_for(std::chrono::milliseconds(30));

}
return 0;

}