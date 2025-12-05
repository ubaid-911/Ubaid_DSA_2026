#include<iostream>
using namespace std;

class Hero {

public:
    Hero() {   // Default Constructor
        cout << "Default Constructor Called!" << endl;
    }

};

int main() {

    Hero h1;   // object created → default constructor runs automatically

    return 0;
}
