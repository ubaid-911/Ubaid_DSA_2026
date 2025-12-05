#include<iostream>
using namespace std;

bool checkPalindrome(string &str, int s, int e) {

    if (s >= e)
        return true;

    if (str[s] != str[e])
        return false;

    return checkPalindrome(str, s + 1, e - 1);
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    if (checkPalindrome(name, 0, name.length() - 1))
        cout << name << " is a Palindrome" << endl;
    else
        cout << name << " is Not a Palindrome" << endl;

    return 0;
}
