#include<iostream>
using namespace std;
int main()
{

    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;


return 0;
}
/*

arr = abcde
      ^
      p --( condition => print p)

      we know that in the char type form the conditions with int type is totaly different 
      that is , in int type if we want to print first element it will print that only
                and in char type it will print hole arr

output : abcde

*/