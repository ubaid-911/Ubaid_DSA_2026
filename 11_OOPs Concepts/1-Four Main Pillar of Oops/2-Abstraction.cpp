#include <iostream>
using namespace std;

// Abstraction: Hiding internal details inside a class
class Car {
private:           
    int speed;      // hidden data
    void checkEngine() {   // hidden function
        cout << "Engine checked successfully.\n";
    }

public:
    Car() {
        speed = 0;
    }

    // Only important function is shown
    void startCar() {
        checkEngine();     // internal work (hidden)
        cout << "Car started.\n";
    }

    void accelerate() {
        speed += 20;
        cout << "Car speed: " << speed << " km/h\n";
    }
};

int main() {

    Car myCar;

    // User only sees simple functions
    myCar.startCar();
    myCar.accelerate();
    myCar.accelerate();

    return 0;
}
