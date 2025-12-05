#include <iostream>
using namespace std;

int modularExponentiation(int a, int b, int m) {
    int result = 1;
    a = a % m;  // reduce base first

    while (b > 0) {
        if (b % 2 == 1) {       // if b is odd
            result = (1LL * result * a) % m;
        }
        a = (1LL * a * a) % m;  // square the base
        b = b / 2;              // divide power by 2
    }

    return result;
}

int main() {
    int a = 3, b = 13, m = 7;
    cout << modularExponentiation(a, b, m) << endl;
    return 0;
}

/*

Dry Run Example: 3^13 % 7
Start:
result = 1, a = 3 % 7 = 3, b = 13

Step 1: b=13 (odd)
👉 result = (1 * 3) % 7 = 3
👉 a = (3*3) % 7 = 2
👉 b = 13/2 = 6

Step 2: b=6 (even)
👉 result = 3 (no change)
👉 a = (2*2) % 7 = 4
👉 b = 6/2 = 3

Step 3: b=3 (odd)
👉 result = (34) % 7 = 12 % 7 = 5
👉 a = (44) % 7 = 2
👉 b = 3/2 = 1

Step 4: b=1 (odd)
👉 result = (52) % 7 = 10 % 7 = 3
👉 a = (22) % 7 = 4
👉 b = 1/2 = 0

End: b=0 → stop
✅ Final Answer = 3

*/