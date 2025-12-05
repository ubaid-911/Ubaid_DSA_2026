#include <iostream>
using namespace std;
int main()
{

    int arr[100];
    int size ;

    cout << " Enter number of elements ";
    cin >> size;

    cout << " Enter " << size << " elements :";
    for(int i=0; i<size; i++) {
        cin >> arr[i];

    }
    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << " Minimum value " << min << endl;
    cout << " Maximum value " << max << endl;

return 0;
}