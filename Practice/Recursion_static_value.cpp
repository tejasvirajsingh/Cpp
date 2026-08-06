#include <iostream>
using namespace std;

int fun(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;

} 
int main(){
    int result;
    result = fun(5);
    cout << "First call result: "<< result << endl;

    result = fun(5);
    cout << "Second call result: " << result << endl;

    return 0;
}