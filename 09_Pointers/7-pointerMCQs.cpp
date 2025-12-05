#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

return 0;
}
/*
    
     __________
arr | | | | | |  ---(size of arr is 5 and size of int is 4)
     1 2 3 4 5           so, 5 x 4 = 20 
                         the size of arr is 20

we know the size of ptr is 4 
so, size of poinnter is 4

output : 20  4


*/