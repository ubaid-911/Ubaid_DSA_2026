#include <iostream>
using namespace std;

class Car {
public:
    string color;
    int speed;

    void start() {
        cout << "Car started!" << endl;
    }

    void stop() {
        cout << "Car stopped!" << endl;
    }
};

int main() {
    Car obj1; // Object created
    obj1.color = "Red";
    obj1.speed = 120;

    cout << "Car color: " << obj1.color << endl;
    cout << "Car speed: " << obj1.speed << " km/h" << endl;

    obj1.start();
    obj1.stop();

    return 0;
}
