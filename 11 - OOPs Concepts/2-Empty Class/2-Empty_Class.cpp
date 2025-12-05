#include <iostream>
using namespace std;

class Empty {
    // no data
    // no functions
};

int main() {
    Empty e1, e2;

    cout << "Size of Empty class: " << sizeof(Empty) << " byte" << endl;

    if (&e1 != &e2) {
        cout << "Objects have different memory addresses!" << endl;
    }

    return 0;
}
