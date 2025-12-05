#include <iostream>
using namespace std;

// Base Class (Parent)
class Vehicle {
public:
    string brand = "Toyota";

    void honk() {
        cout << "Beep! Beep!" << endl;
    }
};

// Derived Class (Child)
class Car : public Vehicle {
public:
    string model = "Corolla";

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car myCar;

    myCar.honk();      // Function from parent class
    myCar.display();   // Function from child class

    return 0;
}
