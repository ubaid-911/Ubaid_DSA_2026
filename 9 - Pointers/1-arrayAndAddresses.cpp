/*
* = value at
& = address of

arr --> is the first element address
&arr[0] --> is also the first element address
*arr --> give the value of first element (you can also add the value like *arr + 1 = 3 where *arr=2)
*(arr+1) --> give the second value of the arr
*arr+1 --> add the elements
*(arr)+1 --> add the elements
arr[i] = *(arr+i) --> get the value of element with the given i value


*/ 

#include<iostream>
using namespace std;
int main()
{

    int arr[10] = {2,5,7,9};
    cout << "address of first memory block is : " << arr << endl;
    cout << "address of first memory block is : " << &arr[0] << endl;
    cout << "First element : " << *arr << endl;
    cout << "Second element : " << *(arr+1) << endl;
    cout << "Add element : " << *arr+1 << endl;
    cout << "Add element 2 : " << *(arr)+1 << endl;

    int i=3;
    cout << arr[i] << endl;
    

return 0;
}