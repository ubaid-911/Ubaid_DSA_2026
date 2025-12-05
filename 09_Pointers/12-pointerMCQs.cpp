#include<iostream>
using namespace std;
int main()
{
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);

return 0;
}
/*

arr = 11 , 12 , 13 , 14 , 15                            arr = 11 , 12 , 13 , 14 , 15 
      ^                                                                      ^
      arr --( *arr is 11 )                                                  arr+1 --(*arr+3 is 14 )


output : 11   14


*/