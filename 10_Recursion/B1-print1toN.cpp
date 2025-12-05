#include <iostream>
using namespace std;

void printNumbers(int i, int n) {
    if (i > n) return;  

    cout << i << " ";    
    printNumbers(i + 1, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(1, n);
    cout << endl;

    return 0;
}
