#include <iostream>
using namespace std;

class Action {
public:
    virtual void run() {
        cout << "General run action" << endl;
    }
};

class Human : public Action {
public:
    void run() override {
        cout << "A human runs using legs 🏃‍♂️" << endl;
    }
};

class Computer : public Action {
public:
    void run() override {
        cout << "A computer runs a program 💻" << endl;
    }
};

class Car : public Action {
public:
    void run() override {
        cout << "A car runs on fuel 🚗" << endl;
    }
};

int main() {
    Action* act;

    Human h;
    Computer c;
    Car car;

    act = &h;
    act->run();   // Human meaning

    act = &c;
    act->run();   // Computer meaning

    act = &car;
    act->run();   // Car meaning

    return 0;
}
