#include<iostream>
using namespace std;
int main()
{
    
    // Number counting pyramid

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout <<j;
        }
        cout<< endl;
    }

return 0;
}
/*
Outer loop: i = 1 to 5 (increasing)
Inner loop: j = 1 to i

In each row, we print numbers from 1 up to i

----------------------------------------------------
First iteration: i = 1
    j = 1 → print 1
    Output: 1

Second iteration: i = 2
    j = 1 → print 1
    j = 2 → print 2
    Output: 12

Third iteration: i = 3
    j = 1 → 1
    j = 2 → 2
    j = 3 → 3
    Output: 123

Fourth iteration: i = 4
    j = 1 → 1
    j = 2 → 2
    j = 3 → 3
    j = 4 → 4
    Output: 1234

Fifth iteration: i = 5
    j = 1 → 1
    j = 2 → 2
    j = 3 → 3
    j = 4 → 4
    j = 5 → 5
    Output: 12345

Loop ends when i = 6 → condition fails

Final Output:
1  
12  
123  
1234  
12345  
*/
