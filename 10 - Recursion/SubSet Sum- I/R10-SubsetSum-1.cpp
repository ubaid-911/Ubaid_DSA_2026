#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void functionSum(vector<int> &arr, int index, int sum, vector<int> &sumSubset, int n) {
    if (index == n) {
        sumSubset.push_back(sum);
        return;
    }

    // Include current element
    functionSum(arr, index + 1, sum + arr[index], sumSubset,n);

    // Exclude current element
    functionSum( arr,index + 1, sum, sumSubset, n);
}

int main() {
    vector<int> arr = {3, 1, 2};
    int n = arr.size();
    vector<int> sumSubset;

    functionSum(arr,0, 0, sumSubset,  n);

    sort(sumSubset.begin(), sumSubset.end());

    cout << "Subset sums in increasing order: ";
    for (int val : sumSubset)
        cout << val << " ";
    cout << endl;

    return 0;
}
