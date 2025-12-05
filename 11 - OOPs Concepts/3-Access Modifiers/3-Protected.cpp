#include<iostream>
using namespace std;

class hero {
protected:
    int health;
    char level;
public:
    void setHealth(int h) { health = h; }
    int getHealth() { return health; }

    void setLevel(char ch) { level = ch; }
    char getLevel() { return level; }
};

// child class
class superHero : public hero {
public:
    void show() {
        cout << "Accessing protected health from child: " << health << endl;
        cout << "Accessing protected level from child: " << level << endl;
    }
};

int main()
{
    superHero s;
    s.setHealth(100);
    s.setLevel('S');

    s.show();  // child class accessing protected members

    return 0;
}
