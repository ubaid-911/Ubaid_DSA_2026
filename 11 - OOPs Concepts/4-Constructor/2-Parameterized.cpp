#include<iostream>
using namespace std;

class Hero {

public:
    int health;
    char level;

    // Parameterized Constructor
    Hero(int h, char ch) {
        health = h;
        level = ch;
    }

};

int main() {

    // Passing values while creating object
    Hero h1(100, 'A');

    cout << "Health: " << h1.health << endl;
    cout << "Level: " << h1.level << endl;

    return 0;
}
