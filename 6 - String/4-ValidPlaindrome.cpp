#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isMaxi(char ch) {

    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')) {
        return true;
    }
    return false;
}

bool validPlaindrome(string s) {

    
    int st =0;
    int e = s.length()-1;

    while(st<e) {
    if(!isMaxi(s[st])) {
        st++;
        continue;
    }
    if(!isMaxi(s[e])) {
        e--;
        continue;
    }
    if(tolower(s[st]) != tolower(s[e])) {
        
        return false;
    }
    st++;
    e--;
  }
return true;
}
int main()
{

    string s;

    cout << " Enter the String "<< endl;
    cin >> s;

    cout << " Plaindrome is " <<  validPlaindrome(s)  << endl;

return 0;
}
