/*

## Binary Search ##

--> Elements should be in montonic finction
    eg: 3 5 9 10 12 

1) Find the Mid Element --> mid=(s+e) / 2

2) Compare mid with key

2) If mid == key then return index 
               or
    Mid != key then search the part(left or right)



*/

#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key) {

    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2; 

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start+end)/2;

    }
    return -1;

}  



int main()
{

    int even[6]={ 2 , 4 , 6 , 12 , 18 , 17};
    int odd[5]={ 1 , 3 ,  5 , 8 , 9};

    int evenIndex = binarySearch(even, 6 , 18);
    cout << " Index of 18 is :" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5 , 5);
    cout << " Index of 5 is :" << oddIndex << endl; 


return 0;
}