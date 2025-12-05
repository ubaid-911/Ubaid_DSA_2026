#include <iostream>
using namespace std;

int gcd(int a , int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {
        if(a>b) {
            a = a-b;
        }else{
            b = b - a;
        }                                
    }   
  return b;
}

int main()
{
    int a,b;
    cout << " Enter the value of a and b : " << endl;
    cin >> a >> b;

    int ans = gcd(a,b);
    cout << " The GCD of " << a << " & " << b << " is " << ans << endl;

return 0;
}
/*

Dry Run (a=56, b=98)
Step 1: Call gcd(56, 98)

a=56, b=98

if(a==0) → false

if(b==0) → false

Enter while(a!=b) → true (56 != 98)

Step 2: Inside while:

Check if(a>b) → false (56 < 98)

Else → b = b - a = 98 - 56 = 42

Now a=56, b=42

Step 3: Loop again (56 != 42 → true)

if(a>b) → true (56 > 42)

So → a = a - b = 56 - 42 = 14

Now a=14, b=42

Step 4: Loop again (14 != 42 → true)

if(a>b) → false (14 < 42)

Else → b = b - a = 42 - 14 = 28

Now a=14, b=28

Step 5: Loop again (14 != 28 → true)

if(a>b) → false (14 < 28)

Else → b = b - a = 28 - 14 = 14

Now a=14, b=14

Step 6: Loop check → a!=b? → false (14==14)
Exit loop.

Step 7: return a → returns 14.


*/