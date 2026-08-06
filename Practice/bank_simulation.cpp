#include <iostream>
using namespace std;

class BankAaccount {
    string name;
    double balance;

    public:

    BankAaccount(string n, double b){
        name = n;
        balance = b;


    }

    void deposite(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";

    }
    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout << "withdrawn: " << amount << "\n";

        } else {
            cout << "Insufficient Balance!\n";
        }
    }
    void display(){
        cout << "Account Holder: " << name << "\nBalance: " << balance << "\n";
    }

};
int main(){
    BankAaccount acc("Mr Max",1000);

    acc.display();
    acc.deposite(500);
    acc.withdraw(200);
    acc.withdraw(2000);
    acc.display();
}