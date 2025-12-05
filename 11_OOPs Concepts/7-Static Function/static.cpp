#include <iostream>
using namespace std;

class Hero {
public:
    static int timeToComplete;   // static variable

    static void printTime() {    // static function
        cout << "Time: " << timeToComplete << endl;
    }
};

// define static variable
int Hero::timeToComplete = 10;

int main() {

    // Calling static function without object
    Hero::printTime();

    return 0;
}
