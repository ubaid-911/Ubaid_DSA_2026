#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsetSum2(vector<int> &arr,int index,  vector<int> &temp, vector<vector<int>> &ans) {
    ans.push_back(temp); // store current subset

    for (int i = index; i < arr.size(); i++) {
        // skip duplicate elements
        if (i > index && arr[i] == arr[i - 1])
            continue;

        temp.push_back(arr[i]);          // include current element
        subsetSum2(arr,i + 1,  temp, ans); // recursion call
        temp.pop_back();                 // backtrack
    }
}

int main() {
    vector<int> arr = {1, 2, 2};
    sort(arr.begin(), arr.end()); // sort for duplicate handling

    vector<vector<int>> ans;
    vector<int> temp;

    subsetSum2(arr, 0, temp, ans);

    cout << "Unique Subsets:\n";
    for (auto subset : ans) {
        cout << "[ ";
        for (int num : subset)
            cout << num << " ";
        cout << "]\n";
    }
}
