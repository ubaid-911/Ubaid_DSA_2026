#include<iostream>
using namespace std;
int main()
{

    // Number counting pyramid
    
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (5 - i + 1);
        }
        cout << endl;
    }


return 0;
}
/*
Outer loop: i = 5 to 1 (decreasing)
Inner loop: j = 1 to i

Each row prints the number: (5 - i + 1), i times

----------------------------------------------------
First iteration: i = 5
    (5 - 5 + 1) = 1
    j = 1 to 5 → print 1 five times
    Output: 11111

Second iteration: i = 4
    (5 - 4 + 1) = 2
    j = 1 to 4 → print 2 four times
    Output: 2222

Third iteration: i = 3
    (5 - 3 + 1) = 3
    j = 1 to 3 → print 3 three times
    Output: 333

Fourth iteration: i = 2
    (5 - 2 + 1) = 4
    j = 1 to 2 → print 4 two times
    Output: 44

Fifth iteration: i = 1
    (5 - 1 + 1) = 5
    j = 1 → print 5
    Output: 5

Loop ends when i = 0 → condition fails

Final Output:
11111
2222
333
44
5
*/
