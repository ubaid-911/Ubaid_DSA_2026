#include <iostream>
using namespace std;

void reverseString(string &str, int i, int j) {
    // Base case
    if (i > j)
        return;

    // Swap characters
    swap(str[i], str[j]);

    // Recursive call
    reverseString(str, i + 1, j - 1);
}

int main() {
    string str = "hello";
    reverseString(str, 0, str.length() - 1);

    cout << "Reversed string: " << str << endl;

    return 0;
}
