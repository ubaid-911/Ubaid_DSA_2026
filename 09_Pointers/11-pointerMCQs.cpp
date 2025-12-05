#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[1] << endl;

return 0;
}
/*

arr = 11 , 21 , 31
       ^
       p  ---(condition => print p[2] )    so ,  11 , 21 ,  31 
                                                 p   p[1]  p[2]

output : 21

*/