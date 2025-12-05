#include<iostream>
using namespace std;

int main()
{

// Number counting pyramid

    int n;
    
    for(int i=0; i<=5; i++) {

        for(int j=1; j<=i; j++) {
            cout <<i;
        }
        cout<<endl;
    }

return 0;
}
  /*
Outer loop: i = 0 to 5
Inner loop: j = 1 to i

Each row prints the current value of i, i times

-------------------------------------------------
First iteration: i = 0
    j = 1 → j <= 0 → false → inner loop skipped
    Output: (empty line)

Second iteration: i = 1
    j = 1 → print 1
    j = 2 → false → stop
    Output: 1

Third iteration: i = 2
    j = 1 → print 2
    j = 2 → print 2
    j = 3 → false
    Output: 22

Fourth iteration: i = 3
    j = 1 → print 3
    j = 2 → print 3
    j = 3 → print 3
    j = 4 → false
    Output: 333

Fifth iteration: i = 4
    j = 1 → print 4
    j = 2 → print 4
    j = 3 → print 4
    j = 4 → print 4
    j = 5 → false
    Output: 4444

Sixth iteration: i = 5
    j = 1 → print 5
    j = 2 → print 5
    j = 3 → print 5
    j = 4 → print 5
    j = 5 → print 5
    j = 6 → false
    Output: 55555

Final Output:
(empty line)
1
22
333
4444
55555
*/