#include <iostream>
using namespace std;

class Animal {          // Parent class
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {   // Child class (inherits from Animal)
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    Dog d;         // Create child object

    d.eat();       // inherited from Animal (parent)
    d.bark();      // Dog’s own function

    return 0;
}
