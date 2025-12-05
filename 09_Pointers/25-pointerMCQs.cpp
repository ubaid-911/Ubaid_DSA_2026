#include<iostream>
using namespace std;

int main()
    {
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;

    return 0;
}
/*
arr = 41 , 52 , 36 , 74
      
    condition => *p = (arr+1)

    41 , 52 , 36 , 74
         ^
         arr+1

    cout => *arr + 8

    41 , 52 , 36 , 74
    ^
   *arr

   so , *arr + 8
         41  +  8 = 49


output : 49


*/