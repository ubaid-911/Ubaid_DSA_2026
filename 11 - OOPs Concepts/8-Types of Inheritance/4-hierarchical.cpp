#include <iostream>
using namespace std;

// Parent Class
class Animal {
public:
    void eat() {
        cout << "Animal can eat." << endl;
    }
};

// Child Class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog can bark." << endl;
    }
};

// Child Class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat can meow." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    cout << "Dog Object Output:" << endl;
    d.eat();   // from Animal
    d.bark();  // from Dog

    cout << "\nCat Object Output:" << endl;
    c.eat();   // from Animal
    c.meow();  // from Cat

    return 0;
}
