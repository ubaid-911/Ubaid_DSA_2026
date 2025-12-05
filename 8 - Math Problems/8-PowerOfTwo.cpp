#include <iostream>
#include <climits>  // Required for INT_MAX
using namespace std;

bool isPowerOfTwo(int n) {
    int ans = 1;

    for (int i = 1; i <= 30; i++) {
        if (n == ans)
            return true;

        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << n << " is a power of 2" << endl;
    else
        cout << n << " is NOT a power of 2" << endl;

    return 0;
}

/*
n = 16
ans = 1

Loop steps:
i = 1: ans = 1 → not equal to 16 → multiply → ans = 2

i = 2: ans = 2 → not equal → ans = 4

i = 3: ans = 4 → not equal → ans = 8

i = 4: ans = 8 → not equal → ans = 16

i = 5: ans = 16 → ✅ match found → return true

Output: true
return ans;
*/