#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string digits, int index, string output, vector<string>& ans, string mapping[]) {
    // Base case: if all digits are processed
    if (index >= digits.length()) {
        if (!output.empty())      // ignore empty input
            ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';     // convert char to int
    string value = mapping[number];       // get letters for that number

    // For each character in the mapping string, make a recursive call
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);       // choose
        solve(digits, index + 1, output, ans, mapping);  // explore
        output.pop_back();                // backtrack
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;

    if (digits.empty()) return ans;

    string output = "";
    int index = 0;

    string mapping[10] = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    solve(digits, index, output, ans, mapping);
    return ans;
}

int main() {
    string digits = "23";
    vector<string> result = letterCombinations(digits);

    cout << "Combinations: ";
    for (string s : result)
        cout << s << " ";
    cout << endl;

    return 0;
}
