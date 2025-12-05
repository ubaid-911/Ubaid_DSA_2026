#include <iostream>
using namespace std;
int main()
{

    int arr[100];
    int size;

    cout << " Enter number of elements :";
    cin >> size;

    cout << " Enter " << size << "Elements :";
    for(int i=0; i<size; i++) {
        cin >>arr[i];
    }
    int unique = 0;

    for(int i=0; i<size ; i++) {
        unique = unique ^ arr[i];
    }
    cout <<  " Unique elements : " << unique << endl; 
return 0;

}
/*

Enter number of elements: 5
Enter 5 elements:
1 2 3 2 1

first iteration : i = 0 --


*/