#include<iostream>
using namespace std;
                      int main()
{

    int n;
    cout << "Enter the size of 2D array : ";
    cin >> n;

    int **arr = new int *[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        6}
    }
    
        for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for(int k=0; k<n; k++) {
    for(int i=0; i<n; i++) {
        for( int j=0; j<n-1; j++) {
            if(arr[i][j] > arr[i][j+1]) {
                swap(arr[i][j] , arr[j][j+1]);
            }
        }
    }
}
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }
return 0;
}