#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeAllOccurrencs(string s , string part) {

    while(s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part) , part.length());
    }
    return s;
}


int main() {
    string s, part;
    cout << "Enter the full string: ";
    cin >> s;

    cout << "Enter the part to remove: ";
    cin >> part;

 cout << "Removing all occurrences of " << part << " from " << s << "" << endl;

    string result = removeAllOccurrencs(s, part);
    cout << "After removing occurrences: " << result << endl;

    return 0;
}
/*

 removeAllOccurrencs("abcabcabc", "ab")


Loop Iteration 1:
s = "abcabcabc"

s.find("ab") = 0

s.erase(0, 2) → removes "ab" from start → s = "cabcabc"

Loop Iteration 2:
s = "cabcabc"

s.find("ab") = 1

s.erase(1, 2) → removes "ab" → s = "ccabc"

Loop Iteration 3:
s = "ccabc"

s.find("ab") = 2

s.erase(2, 2) → removes "ab" → s = "ccc"

Loop Iteration 4:
s = "ccc"

s.find("ab") = npos (not found)

Loop breaks

Final Output:
After removing occurrences: ccc 












*/