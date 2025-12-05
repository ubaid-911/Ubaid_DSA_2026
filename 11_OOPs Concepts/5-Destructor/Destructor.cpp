#include <iostream>
using namespace std;

class Hero {
public:
    Hero() {
        cout << "Constructor called" << endl;
    }
    ~Hero() {
        cout << "Destructor called" << endl;
    }
};

void fun() {
    Hero temp; // constructor runs
} // destructor runs here

int main() {

    Hero A;  // constructor runs
    fun();   // destructor runs for temp

    Hero* B = new Hero();  // constructor runs
    delete B;  // destructor runs for B

    return 0; 
} // destructor runs for A
