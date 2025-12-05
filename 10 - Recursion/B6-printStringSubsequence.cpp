#include <iostream>
using namespace std;

void printSubsequence(string str, string output, int n) {

    if (n == str.length()) {
        cout << output << endl;
        return;
    }


    printSubsequence(str, output, n + 1);


    output.push_back(str[n]);
    printSubsequence(str, output, n + 1);
    output.pop_back();
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All Subsequences are:\n";
    printSubsequence(str, "", 0);

    return 0;
}
