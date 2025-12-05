#include <iostream>
#include <vector>
using namespace std;

void recurPermute(int index, vector<int> &arr, vector<vector<int>> &ans) {
    // Base case — when index reaches end
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++) { // remember to take i = index
        swap(arr[index], arr[i]);               // fix one element
        recurPermute(index + 1, arr, ans);      // recurse for next index
        swap(arr[index], arr[i]);               // backtrack (undo the swap)
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;

    recurPermute(0, arr, ans);

    cout << "All permutations:\n";
    for (auto v : ans) {
        for (int num : v)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
