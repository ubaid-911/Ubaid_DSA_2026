#include <iostream>
#include <vector>
using namespace std;

void recurPermute(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, vector<int> &used) {
    if (ds.size() == arr.size()) {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (!used[i]) {
            used[i] = 1;
            ds.push_back(arr[i]);
            recurPermute(arr, ds, ans, used);
            used[i] = 0;
            ds.pop_back();
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> used(arr.size(), 0);

    recurPermute(arr, ds, ans, used);

    cout << "All permutations:\n";
    for (auto v : ans) {
        for (int num : v)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
