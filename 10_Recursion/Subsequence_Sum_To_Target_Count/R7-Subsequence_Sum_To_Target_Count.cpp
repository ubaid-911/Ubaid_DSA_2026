#include <iostream>
#include <vector>
using namespace std;

// Returns the count of subsequences whose sum equals target
int countSubsequences(vector<int> &arr, int index, int sum, int target) {
    // base case: reached end of array
    if (index == arr.size()) {
        if (sum == target)
            return 1;
        else
            return 0;
    }

    // include current element
    int countWith = countSubsequences(arr, index + 1, sum + arr[index], target);

    // exclude current element
    int countWithout = countSubsequences(arr, index + 1, sum, target);

    // total count
    return countWith + countWithout;
}

int main() {
    vector<int> arr = {1, 2, 1};
    int target = 2;

    int totalCount = countSubsequences(arr, 0, 0, target);

    cout << "Number of subsequences with sum " << target << " is: " << totalCount << endl;

    return 0;
}
