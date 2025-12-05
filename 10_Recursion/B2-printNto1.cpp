#include <iostream>
using namespace std;

void printReverse(int n) {
    if (n == 0) return;   

    cout << n << " ";     
    printReverse(n - 1);  
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Numbers from " << n << " to 1 are: ";
    printReverse(n);
    cout << endl;

    return 0;
}
