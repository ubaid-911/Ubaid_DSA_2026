#include<iostream>
#include <climits>  // Required for INT_MAX and INT_MIN

using namespace std;


class Solution {
public:    
    int reverse(int x) {
        int ans = 0;

        while (x != 0) { 
            int digit = x % 10;

            // Overflow checks
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))
                return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8))
                return 0;

            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main() {
    Solution obj;
    cout << "Reverse of 123 is: " << obj.reverse(123) << endl;

    return 0;
}

/*
x = 123
ans = 0

🔁 First iteration of while loop:

digit = x % 10 = 123 % 10 = 3
check: ans > INT_MAX / 10? (ans = 0, so NO)
ans = ans * 10 + digit = 0 * 10 + 3 = 3
x = x / 10 = 123 / 10 = 12

🔁 Second iteration:

digit = 12 % 10 = 2
check: ans > INT_MAX / 10? (ans = 3, so NO) 
ans = 3 * 10 + 2 = 32
x = 12 / 10 = 1

🔁 Third iteration:

digit = 1 % 10 = 1
check: ans > INT_MAX / 10? (ans = 32, so NO)
ans = 32 * 10 + 1 = 321
x = 1 / 10 = 0

🔚 Loop exits (x == 0)

return ans = 321 ✅



🔴 Now Dry Run for Negative Number: x = -456

--> x = -456
    ans = 0

   🔁 First iteration:

   digit = -456 % 10 = -6
   ans = 0 * 10 + (-6) = -6
   x = -456 / 10 = -45

  🔁 Second:

   digit = -45 % 10 = -5
   ans = -6 * 10 + (-5) = -65
   x = -4

   🔁 Third:

   digit = -4 % 10 = -4
   ans = -65 * 10 + (-4) = -654
   x = 0

   ➡️ Return: -654
   
*/