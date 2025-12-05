#include <iostream>
#include <vector>
using namespace std;

bool printOneSubsequence(vector<int> &arr, int index, vector<int> &output, int target) {
    // base case
    if (index == arr.size()) {
        int sum = 0;
        for (int num : output)
            sum += num;

        if (sum == target && !output.empty()) {
            cout << "(";
            for (int i = 0; i < output.size(); i++) {
                cout << output[i];
                if (i != output.size() - 1) cout << ", ";
            }
            cout << ")" << endl;
            return true;  // found one, stop recursion
        }
        return false;
    }

    // include current element
    output.push_back(arr[index]);
    if (printOneSubsequence(arr, index + 1, output, target))
        return true; // stop if found

    // exclude current element
    output.pop_back();
    if (printOneSubsequence(arr, index + 1, output, target))
        return true; // stop if found

    return false; // no valid subsequence found
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> output;
    int target = 2;

    printOneSubsequence(arr, 0, output, target);

    return 0;
}
