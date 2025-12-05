#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int> &dp) {
    if (n == 0 || n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
}

int climbStairs(int n) {
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}

int main() {
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Total ways: " << climbStairs(n) << endl;
    return 0;
}
