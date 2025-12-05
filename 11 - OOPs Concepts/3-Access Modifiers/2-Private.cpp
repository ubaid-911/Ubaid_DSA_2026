#include <iostream>
using namespace std;

class hero
{

public:
    int health;

    private:
    char level;

    void print()
    {
        cout << level << endl;
    }
};

int main()
{

    hero didi;

    cout << "health is : " << didi.health << endl;
    cout << "level is : " << didi.level << endl;

    return 0;
}

/*

#include<iostream>
using namespace std;

class hero {

private:
    int health;
    char level;

public:

    // SETTER for health
    void setHealth(int h) {
        health = h;
    }

    // GETTER for health
    int getHealth() {
        return health;
    }

    // SETTER for level
    void setLevel(char ch) {
        level = ch;
    }

    // GETTER for level
    char getLevel() {
        return level;
    }
};

int main() {

    hero didi;

    // setting values using setters
    didi.setHealth(90);
    didi.setLevel('A');

    // getting values using getters
    cout << "health is : " << didi.getHealth() << endl;
    cout << "level is : " << didi.getLevel() << endl;

    return 0;
}


*/