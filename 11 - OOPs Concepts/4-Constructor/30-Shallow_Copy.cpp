#include<iostream>
using namespace std;

class Hero {
public:
    int *health;

    Hero(int h) {
        health = new int(h);
    }

    // Default Shallow Copy Constructor (compiler generated)
};

int main() {

    Hero h1(100);
    Hero h2 = h1;   // SHALLOW COPY

    cout << "Before change:" << endl;
    cout << "h1 health = " << *h1.health << endl;
    cout << "h2 health = " << *h2.health << endl;

    // change h2
    *h2.health = 200;

    cout << "\nAfter change:" << endl;
    cout << "h1 health = " << *h1.health << endl;  // also changes!
    cout << "h2 health = " << *h2.health << endl;

    return 0;
}
