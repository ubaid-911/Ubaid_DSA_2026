#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int size;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found=true;
                break; 
            }
        }
    }
    if(!found) {
        cout << " None ";
    }

    return 0;
}
  
/*



arr = [1, 2, 3, 4, 5]
target = 5

Dry Run:

i = 0 → arr[i] = 1

j = 1 → 1 + 2 = 3 ❌

j = 2 → 1 + 3 = 4 ❌

j = 3 → 1 + 4 = 5 ✅ (pair: 1, 4)

j = 4 → 1 + 5 = 6 ❌

i = 1 → arr[i] = 2

j = 2 → 2 + 3 = 5 ✅ (pair: 2, 3)

j = 3 → 2 + 4 = 6 ❌

j = 4 → 2 + 5 = 7 ❌

i = 2 → arr[i] = 3 ... (rest skipped, no new pairs)

Output: (1, 4) and (2, 3)























*/