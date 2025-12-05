#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++ ) {
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s)  {

int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        int number = 0;
        if(ch>='a' && ch <= 'z') {
            number = ch-'a';
        }
        else{
            
            number = ch -'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;


return 0;
}
/* 

aAbbbCCcd

i = 0, ch = 'a'
It is between 'a' and 'z'

number = 'a' - 'a' = 0

arr[0]++ → arr becomes:

[1, 0, 0, 0, ..., 0]

 = 1, ch = 'A'
It is between 'A' and 'Z'

number = 'A' - 'A' = 0

arr[0]++ → arr becomes:

[2, 0, 0, 0, ..., 0]
 i = 2, ch = 'b'
number = 'b' - 'a' = 1

arr[1]++ → arr becomes:

[2, 1, 0, 0, ..., 0]
 i = 3, ch = 'b'
number = 'b' - 'a' = 1

arr[1]++ → arr becomes:

[2, 2, 0, 0, ..., 0]
 i = 4, ch = 'b'
number = 'b' - 'a' = 1

arr[1]++ → arr becomes:

[2, 3, 0, 0, ..., 0]
 i = 5, ch = 'C'
number = 'C' - 'A' = 2

arr[2]++ → arr becomes:

[2, 3, 1, 0, ..., 0]
 i = 6, ch = 'C'
number = 'C' - 'A' = 2

arr[2]++ → arr becomes:

[2, 3, 2, 0, ..., 0]
i = 7, ch = 'c'
number = 'c' - 'a' = 2

arr[2]++ → arr becomes:

[2, 3, 3, 0, ..., 0]
 i = 8, ch = 'd'
number = 'd' - 'a' = 3

arr[3]++ → arr becomes:

[2, 3, 3, 1, 0, ..., 0]
 Now, find the max occurring character:
int maxi = -1, ans = 0;
for(int i = 0; i < 26; i++) {
    if(maxi < arr[i]) {
        ans = i;
        maxi = arr[i];
    }
}
Step-by-step check:

i=0: arr[0] = 2 → maxi = 2, ans = 0

i=1: arr[1] = 3 → maxi = 3, ans = 1

i=2: arr[2] = 3 → maxi = 3, ans remains 1 (tie, but first one stays)

i=3: arr[3] = 1 → no change

i=4 to i=25: all 0 → no change








*/