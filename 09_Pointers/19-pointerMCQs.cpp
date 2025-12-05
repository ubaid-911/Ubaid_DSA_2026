#include<iostream>
using namespace std;
void fun(int arr[]) {
        cout << arr[0] << " ";
    }

    int main() {
        int arr[] = {11, 12, 13, 14};
        fun(arr + 1);
        cout << arr[0] << endl;
        cout << (arr+1) ;

return 0;

}
/*

int main

arr = 11  12  13  14
      ^   ^
     arr arr+1   ---( print arr+1 = 12 )

void fun

arr = 11  12  13  14
      ^   
     arr   ---( print arr = 11 )
    
output : 12   11 


*/

