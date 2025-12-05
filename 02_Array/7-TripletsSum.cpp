#include <iostream>
using namespace std;

int main() {
    int arr[100], n, target;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    // Brute force check for triplet
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "Triplet: " << arr[i] << " + " << arr[j] << " + " << arr[k]
                         << " = " << target << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No triplet found.\n";
    return 0;
}
