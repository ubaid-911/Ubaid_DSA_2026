#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size,sum=0;

    cout <<" Enter number of elements :" ;
    cin >> size;

    cout << " Enter " << size << " elements :";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
        sum = sum  + arr[i];
    }
    cout << " Sum of array elements :" << sum << endl;


return 0;
}



