#include<iostream>
using namespace std;
int main()
{
for(int i=1; i<=5; i++) {
    int coef = 1;
    for(int k=5-i; k>0; k--) {
        cout << " ";
    }
    for(int j = 1; j<=i; j++) {
        cout<<coef<<" ";
        coef = coef*(i-j)/j;
    }
    cout<< endl;
}

return 0;
}

/*
Purpose: Print Pascal's Triangle (first 5 rows)

Outer loop: i = 1 to 5 → represents row number
Inner loop (k): prints leading spaces for triangle shape
Inner loop (j): prints binomial coefficients using formula:
        coef = coef * (i - j) / j;

Initial: coef = 1 (first element of every row is 1)

----------------------------------------------------
First iteration: i = 1
    Spaces: 5 - 1 = 4 → print 4 spaces
    coef = 1
    j = 1 → print 1
    coef = 1 * (1-1)/1 = 0
    Output:     1

Second iteration: i = 2
    Spaces: 3
    coef = 1
    j = 1 → print 1
    coef = 1 * (2-1)/1 = 1
    j = 2 → print 1
    coef = 1 * (2-2)/2 = 0
    Output:    1 1

Third iteration: i = 3
    Spaces: 2
    coef = 1
    j = 1 → print 1
    coef = 1 * (3-1)/1 = 2
    j = 2 → print 2
    coef = 2 * (3-2)/2 = 1
    j = 3 → print 1
    Output:   1 2 1

Fourth iteration: i = 4
    Spaces: 1
    coef = 1
    j = 1 → 1
    coef = 1*(4-1)/1 = 3
    j = 2 → 3
    coef = 3*(4-2)/2 = 3
    j = 3 → 3
    coef = 3*(4-3)/3 = 1
    j = 4 → 1
    Output:  1 3 3 1

Fifth iteration: i = 5
    Spaces: 0
    coef = 1
    j = 1 → 1
    coef = 1*(5-1)/1 = 4
    j = 2 → 4
    coef = 4*(5-2)/2 = 6
    j = 3 → 6
    coef = 6*(5-3)/3 = 4
    j = 4 → 4
    coef = 4*(5-4)/4 = 1
    j = 5 → 1
    Output: 1 4 6 4 1

Final Output:
    1  
   1 1  
  1 2 1  
 1 3 3 1  
1 4 6 4 1  
*/
