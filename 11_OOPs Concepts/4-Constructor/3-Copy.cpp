#include<iostream>
using namespace std;

class Hero {
public:
    int health;
    char level;

    // Parameterized Constructor
    Hero(int h, char l) {
        health = h;
        level = l;
    }

    // Copy Constructor
    Hero(Hero &temp) {
        cout << "Copy Constructor Called!" << endl;
        health = temp.health;
        level = temp.level;
    }
};

int main() {

    Hero h1(100, 'A');   // normal object

    Hero h2(h1);         // copy constructor called

    cout << "H2 Health: " << h2.health << endl;
    cout << "H2 Level: " << h2.level << endl;

    return 0;
}
