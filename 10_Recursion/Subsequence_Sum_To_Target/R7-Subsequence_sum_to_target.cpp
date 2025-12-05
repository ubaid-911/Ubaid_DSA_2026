#include <iostream>
#include <vector>
using namespace std;

void printSubsequenceSumTarget(vector<int> &arr, int index, vector<int> &output, int target) {
    // Base case
    if (index == arr.size()) {
        int sum = 0;
        for (int num : output)
         sum += num;

        if (sum == target) {
            cout << "[ ";
            for (int num : output)
                cout << num << " ";
            cout << "]" << endl;
        }
        return;
    }

    // Include current element
    output.push_back(arr[index]);
    printSubsequenceSumTarget(arr, index + 1, output, target);

    // Exclude current element
    output.pop_back();
    printSubsequenceSumTarget(arr, index + 1, output, target);
}

int main() {
    vector<int> arr = {1, 2, 1};
    int target = 2;

    vector<int> output;
    cout << "Subsequences with sum = " << target << ":\n";
    printSubsequenceSumTarget(arr, 0, output, target);
}
