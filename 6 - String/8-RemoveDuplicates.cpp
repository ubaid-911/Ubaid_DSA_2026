#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeAdjacentDuplicates(string s) {
    string result = "";

    for (char ch : s) {
        if (!result.empty() && result.back() == ch) {
            result.pop_back(); // remove duplicate
        } else {
            result.push_back(ch); // add new character
        }
    }


    
    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string cleaned = removeAdjacentDuplicates(s);
    cout << "After removing adjacent duplicates: " << cleaned << endl;

    return 0;
}
/*

s = "abbaca"


Step 1:
Current character: 'a'

result is empty → just add 'a' → result becomes "a"

Step 2:
Current character: 'b'

Last character in result is 'a' (not equal to 'b') → add 'b' → result becomes "ab"

Step 3:
Current character: 'b'

Last character in result is 'b' → it's a duplicate → remove 'b' → result becomes "a"

Step 4:
Current character: 'a'

Last character in result is 'a' → it's a duplicate → remove 'a' → result becomes ""

Step 5:
Current character: 'c'

result is empty → add 'c' → result becomes "c"

Step 6:
Current character: 'a'

Last character in result is 'c' → not equal to 'a' → add 'a' → result becomes "ca"

Final Output:
After removing adjacent duplicates: ca




























*/