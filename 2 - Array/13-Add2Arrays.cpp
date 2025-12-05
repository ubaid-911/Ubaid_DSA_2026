#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseVector(vector<int> &v) {
    int i = 0;
    int j = v.size() - 1;

    while(i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

vector<int> sumArray(vector<int>&a, int n ,vector<int>&b,int m) {
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;

    while(i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while(carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverseVector(ans); // call custom reverse
    return ans;
}

int main() {
    vector<int> a = {1,2,3,4,5}; // 12345
    vector<int> b = {1,0};       // 10

    vector<int> ans = sumArray(a, a.size(), b, b.size());

    for(int val : ans) {
        cout << val << " ";
    }
    cout << endl;
}
