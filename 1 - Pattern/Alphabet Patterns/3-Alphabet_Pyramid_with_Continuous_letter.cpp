#include<iostream>
using namespace std;
int main()
{

     char alphabet = 'a';
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=i; j++) {
            cout <<alphabet++;
        }
        cout<< endl;
    }

return 0;
}
/*
Outer loop: i = 1 to 6 (increasing)
Inner loop: j = 1 to i

`char alphabet = 'a';` is declared **before the loop**, so it **keeps increasing across all rows**

Each row prints i characters, starting from where the last row left off in the alphabet sequence.

----------------------------------------------------
Initial: alphabet = 'a'

First iteration: i = 1
    j = 1 → print 'a', alphabet becomes 'b'
    Output: a

Second iteration: i = 2
    j = 1 → print 'b', alphabet becomes 'c'
    j = 2 → print 'c', alphabet becomes 'd'
    Output: bc

Third iteration: i = 3
    j = 1 → print 'd', alphabet becomes 'e'
    j = 2 → print 'e', alphabet becomes 'f'
    j = 3 → print 'f', alphabet becomes 'g'
    Output: def

Fourth iteration: i = 4
    j = 1 → g
    j = 2 → h
    j = 3 → i
    j = 4 → j
    Output: ghij

Fifth iteration: i = 5
    j = 1 → k
    j = 2 → l
    j = 3 → m
    j = 4 → n
    j = 5 → o
    Output: klmno

Sixth iteration: i = 6
    j = 1 → p
    j = 2 → q
    j = 3 → r
    j = 4 → s
    j = 5 → t
    j = 6 → u
    Output: pqrstu

Final value of alphabet: 'v'
Loop ends when i = 7 → condition fails

Final Output:
a  
bc  
def  
ghij  
klmno  
pqrstu  
*/
