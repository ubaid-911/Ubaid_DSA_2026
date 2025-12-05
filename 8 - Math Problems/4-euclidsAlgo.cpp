#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << ans << endl;

    return 0;
}
/*

🔹 Example Dry Run for a = 56, b = 98
a = 56, b = 98
→ b != 0
→ temp = 98
→ b = 56 % 98 = 56
→ a = 98

Now a = 98, b = 56

a = 98, b = 56
→ temp = 56
→ b = 98 % 56 = 42
→ a = 56

Now a = 56, b = 42

a = 56, b = 42
→ temp = 42
→ b = 56 % 42 = 14
→ a = 42

Now a = 42, b = 14

a = 42, b = 14
→ temp = 14
→ b = 42 % 14 = 0
→ a = 14

Now loop ends ✅

👉 Answer = 14

*/