#include <iostream>
using namespace std;

// Function to find sum using recursion
int sum(int n) {
    if (n == 0)          // base case
        return 0;
    else
        return n + sum(n - 1);   // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " numbers is: " << sum(n) << endl;
    return 0;
}