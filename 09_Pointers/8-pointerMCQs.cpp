#include<iostream>
using namespace std;
int main()
{

    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;


return 0;
}
/*

arr[] = 11 , 21 , 13 , 14
        ^
        arr  --(*arr = 11)

        11 , 21 , 13 , 14
        ----->
             ^
            arr+1 --(*arr+1 = 21)

output : 11  21

*/