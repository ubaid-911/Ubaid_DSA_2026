#include <iostream>
using namespace std;

class Demo {
public:
    static int count;   // static variable
};

// define static variable outside
int Demo::count = 0;

int main() {
    Demo a;
    Demo b;

    Demo::count = 5;    // same for all objects

    cout << Demo::count << endl; 
}
