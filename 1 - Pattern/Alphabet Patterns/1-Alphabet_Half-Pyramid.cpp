#include<iostream>
using namespace std;
int main()
{

    char alphabet = 'a';
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=i; j++) {
            cout <<alphabet;
        }
        alphabet++;
        cout<< endl;
    }

return 0;
}

/*
Outer loop: i = 1 to 6 (increasing)
Inner loop: j = 1 to i

Each row prints the current character (starting from 'a') → i times

----------------------------------------------------
First iteration: i = 1
    alphabet = 'a'
    j = 1 → print 'a' once
    Output: a

Second iteration: i = 2
    alphabet = 'b'
    j = 1 to 2 → print 'b' two times
    Output: bb

Third iteration: i = 3
    alphabet = 'c'
    j = 1 to 3 → print 'c' three times
    Output: ccc

Fourth iteration: i = 4
    alphabet = 'd'
    j = 1 to 4 → print 'd' four times
    Output: dddd

Fifth iteration: i = 5
    alphabet = 'e'
    j = 1 to 5 → print 'e' five times
    Output: eeeee

Sixth iteration: i = 6
    alphabet = 'f'
    j = 1 to 6 → print 'f' six times
    Output: ffffff

Loop ends when i = 7 → condition fails

Final Output:
a  
bb  
ccc  
dddd  
eeeee  
ffffff  
*/
