#include <iostream>
using namespace std;

// Grandparent Class
class Animal {
public:
    void eat() {
        cout << "Animal: I can eat." << endl;
    }
};

// Parent Class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog: I can bark." << endl;
    }
};

// Child Class (inherits from Dog)
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy: I can weep." << endl;
    }
};

int main() {
    Puppy babyPuppy; // object of child class

    // Calling functions from all levels
    babyPuppy.eat();   // From Animal class
    babyPuppy.bark();  // From Dog class
    babyPuppy.weep();  // From Puppy class

    return 0;
}
