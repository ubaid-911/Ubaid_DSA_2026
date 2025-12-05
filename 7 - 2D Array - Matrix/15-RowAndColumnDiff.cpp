#include<iostream>
using namespace std;
int main()
{
    int row ;
    cout << "Enter the Row size : ";
    cin >> row;

    int col;
    cout << "Enter the Column size : ";
    cin >> col;

    int **arr = new int *[row];
    for(int i=0; i<col; i++) {
        arr[i] = new int[row];
    }

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

return 0;
}