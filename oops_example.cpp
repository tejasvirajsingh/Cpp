#include <iostream>
using namespace std;

// Class (Encapsulation)

class Vehicle {
    protected:
    string brand;
    int year;
    public:
    Vehicle(string b, int y){
        brand =b ;
        year = y;

    }
    virtual void display(){
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

};

// Derived class.. (Inheritance)

class Car: public Vehicle{
    int doors;
    public:
    Car(string b, int y, int d) : Vehicle(b,y){
        doors =d;
    }
    void display() override {
        cout << "Car ->  Brand: " << brand << ", Year: " << year << ", Doors: " << doors << endl;

    }

};

// another Class derived

class Bike : public Vehicle{
    bool hasGear;
    public: 
    Bike(string b, int y, bool g) : Vehicle(b, y){
        hasGear = g;
    }

    void display() override {
        cout << "Bike -> Brand: " << brand << ", Year: " << year << ", Gear: " << (hasGear ? "Yes" : "No") << endl;

    }
};

int main(){
    Vehicle* v1 = new Car("BMW", 2025, 4);
    Vehicle* v2 = new Bike("Bullet", 2025, true);

    v1->display();
    v2->display();

    delete v1;
    delete v2;
    return 0;
}