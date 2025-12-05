#include <iostream>  
using namespace std;

// Function to find complement of a base 10 integer
int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;

    if (n == 0)
        return 1;

    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    return ans;
}

// Main function to test
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
 
    int result = bitwiseComplement(n);
    cout << "Complement is: " << result << endl;

    return 0;
}

/*
🔁 First iteration (m = 5)
mask = (0 << 1) | 1
→ 0 << 1 = 0, then 0 | 1 = 1
→ So mask = 1

m = 5 >> 1 = 2 (Right shift by 1)

🔁 Second iteration (m = 2)
mask = (1 << 1) | 1
→ 1 << 1 = 2, then 2 | 1 = 3
→ Now mask = 3

m = 2 >> 1 = 1

🔁 Third iteration (m = 1)
mask = (3 << 1) | 1
→ 3 << 1 = 6, then 6 | 1 = 7                                              
→ So mask = 7

m = 1 >> 1 = 0 → loop stops

🔚 Final mask = 7
Binary: 111 → 3 bits long, same as n = 5

*/