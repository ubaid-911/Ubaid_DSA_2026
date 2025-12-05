#include<iostream>
using namespace std;
int main()
{
    

    int x =1;

      for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++) {
            cout << x++;
        }
        cout<< endl;
    }

return 0;
}
/*
Outer loop: i = 1 to 5 (increasing)
Inner loop: j = 1 to i

Initial: int x = 1;
Each time we print x, then increment it (x++)

----------------------------------------------------
First iteration: i = 1
    j = 1 → print 1, x becomes 2
    Output: 1

Second iteration: i = 2
    j = 1 → print 2, x becomes 3
    j = 2 → print 3, x becomes 4
    Output: 23

Third iteration: i = 3
    j = 1 → 4
    j = 2 → 5
    j = 3 → 6
    Output: 456

Fourth iteration: i = 4
    j = 1 → 7
    j = 2 → 8
    j = 3 → 9
    j = 4 → 10
    Output: 78910

Fifth iteration: i = 5
    j = 1 → 11
    j = 2 → 12
    j = 3 → 13
    j = 4 → 14
    j = 5 → 15
    Output: 1112131415

Loop ends when i = 6 → condition fails

Final Output:
1  
23  
456  
78910  
1112131415  
*/
