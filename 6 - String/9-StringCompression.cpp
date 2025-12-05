#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n) {
        int j=i+1;
        while(j<n && chars[i] == chars[j]) {
            j++;
        }
        chars[ansIndex++] = chars[i];

        int count = j-i;

        if(count>1) {
            string cnt = to_string(count);
            for(char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }
        i=j;
    } 
    return ansIndex;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int length = compress(chars);

    cout << "Compressed characters: ";
    for (int i = 0; i < length; i++) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
/*

1st Iteration (i = 0)
j = 1 → chars[0] == chars[1] → j++ → j = 2

chars[ansIndex++] = chars[0] → chars[0] = 'a' → ansIndex = 1

count = j - i = 2 - 0 = 2

Convert count 2 to string "2" → insert into chars:

chars[1] = '2' → ansIndex = 2

i = j = 2

➡️ chars = {'a', '2', 'b', 'b', 'c', 'c', 'c'}

🔹 2nd Iteration (i = 2)
j = 3 → chars[2] == chars[3] → j++ → j = 4

chars[ansIndex++] = chars[2] = 'b' → ansIndex = 3

count = 4 - 2 = 2

Convert "2":

chars[3] = '2' → ansIndex = 4

i = j = 4

➡️ chars = {'a', '2', 'b', '2', 'c', 'c', 'c'}

🔹 3rd Iteration (i = 4)
j = 5 → 'c' == 'c' → j = 6

j = 6 → 'c' == 'c' → j = 7

chars[ansIndex++] = chars[4] = 'c' → ansIndex = 5

count = 7 - 4 = 3

Convert "3":

chars[5] = '3' → ansIndex = 6

i = j = 7

➡️ chars = {'a', '2', 'b', '2', 'c', '3', 'c'}

❌ Now i = 7, which is equal to n, so loop ends.





























































*/