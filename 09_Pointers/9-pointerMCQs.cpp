#include<iostream>
using namespace std;
int main()
{
    
    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;

return 0;
}
/*

arr[] = 11 , 12 , 31                            arr[] = 11 , 12 , 31
        ^                                               ^
       arr --( address of 11)                          &arr --( address of 11)

       
output : 0x61fef8    0x61fef8

*/