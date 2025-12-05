#include<iostream>
using namespace std;
int main()
{

     
    for(int i=1; i<=5; i++) {
        char alphabet = 'a';
        for(int j=1; j<=i; j++) {
            cout <<alphabet++;
        }
        cout<< endl;
    }

return 0;
}

/*
Outer loop: i = 1 to 5 (increasing)
Inner loop: j = 1 to i

Each row prints letters starting from 'a' up to the ith alphabet

Note: `char alphabet = 'a';` is re-initialized in each outer loop

----------------------------------------------------
First iteration: i = 1
    alphabet = 'a'
    j = 1 → print 'a', then alphabet++
    Output: a

Second iteration: i = 2
    alphabet = 'a'
    j = 1 → print 'a', then alphabet++
    j = 2 → print 'b', then alphabet++
    Output: ab

Third iteration: i = 3
    alphabet = 'a'
    j = 1 → print 'a'
    j = 2 → print 'b'
    j = 3 → print 'c'
    Output: abc

Fourth iteration: i = 4
    alphabet = 'a'
    j = 1 → a
    j = 2 → b
    j = 3 → c
    j = 4 → d
    Output: abcd

Fifth iteration: i = 5
    alphabet = 'a'
    j = 1 to 5 → print a, b, c, d, e
    Output: abcde

Loop ends when i = 6 → condition fails

Final Output:
a  
ab  
abc  
abcd  
abcde  
*/
