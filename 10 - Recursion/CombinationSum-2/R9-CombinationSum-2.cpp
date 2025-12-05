#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find all unique combinations
void findCombinations(vector<int> &arr , int index,vector<int> &output, int target,  vector<vector<int>> &result) {

    // Base case — if we reach the target, store the combination
    if (target == 0) {
        result.push_back(output);
        return;
    }

    // Loop through the array starting from current index
    for (int i = index; i < arr.size(); i++) {

        // Step 1: Skip duplicate numbers
        if (i > index && arr[i] == arr[i - 1])
            continue;

        // Step 2: If number is greater than target, stop (because array is sorted)
        if (arr[i] > target)
            break;

        // Step 3: Choose the current number
        output.push_back(arr[i]);

        // Step 4: Move to next index (no reuse allowed)
        findCombinations(arr, i + 1,output, target - arr[i],  result);

        // Step 5: Remove the number (backtrack)
        output.pop_back();
    }
}

int main() {
    vector<int> arr = {1,1,1,2,2};
    int target = 4;

    // Step A: Sort array so that duplicates stay together
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          sort(arr.begin(), arr.end());

    vector<vector<int>> result;
    vector<int> output;

    findCombinations(arr,0,output, target,   result);

    cout << "Unique combinations that sum to " << target << " are:\n";

    for (auto &comb : result) {
        cout << "[ ";
        for (int num : comb)
            cout << num << " ";
        cout << "]\n";
    }

    return 0;
}
