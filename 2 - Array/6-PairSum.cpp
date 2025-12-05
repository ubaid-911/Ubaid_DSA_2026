#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 4, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair Found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                return 0;
            }
        }
    }

    cout << "No Pair Found" << endl;
    return 0;
}
