#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    // Base Case
    if (n == 0)
        return;

    // Get last digit
    int digit = n % 10;

    // Recursive call for remaining number
    sayDigit(n / 10, arr);

    // Print the word for current digit
    cout << arr[digit] << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string arr[] = {"Zero", "One", "Two", "Three", "Four", 
                    "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Digits in words: ";
    sayDigit(n, arr);

    return 0;
}
