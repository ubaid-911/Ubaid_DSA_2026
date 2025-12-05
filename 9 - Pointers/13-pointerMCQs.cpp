#include<iostream>
using namespace std;
int main()
{

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;

return 0;
}
/*

we should know that we cannot increament the size of arr like arr++


*/