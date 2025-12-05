#include <iostream>
using namespace std;

int findPeak(int arr[], int size)
{

    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{

    int arr[] = {1, 2, 3, 9, 3, 4, 5};
    int size = 7;

    int peakIndex = findPeak(arr, size);

    cout << " Index of Peak is " << peakIndex << " and its Value is " << arr[peakIndex];

    return 0;
}