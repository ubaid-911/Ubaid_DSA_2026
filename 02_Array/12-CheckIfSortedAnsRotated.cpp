#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSortedAndRotated(vector<int>& v) {
    int n = v.size();
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            count++;
        }
    } 
    

    if (v[n - 1] > v[0]) {
        count++;
    }
    return count == 1;
}

int main() {
    vector<int> v = {3,4,5,1,2};

    if (isSortedAndRotated(v)) {
        cout << "Yes, it is sorted and rotated." << endl;
    } else {
        cout << "No, it is not sorted and rotated." << endl;
    }

    return 0;
}
/*

i=0
v[0] = 3, v[1] = 4

3 > 4? ❌ → do nothing

i = 1:

v[1] = 4, v[2] = 5

4 > 5? ❌ → still fine

i = 2:

v[2] = 5, v[3] = 1

5 > 1? ✅ → break in order → count++, now count = 1

i = 3:

v[3] = 1, v[4] = 2

1 > 2? ❌ → still okay

🔁 After loop:
Now check last element and first:

v[4] = 2, v[0] = 3
2 > 3? ❌ → no change in count
✅ Final check:
return count == 1;  // count is 1, so returns true
🔊 Output:
Yes, it is sorted and rotated.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Only when count == 1 → true (sorted & rotated).

When count == 0 → sorted but not rotated.

When count >= 2 (like 2, 3, …) → unsorted.


*/