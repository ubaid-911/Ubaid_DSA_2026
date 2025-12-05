/*

what is Reference Variable :

==> A reference variable is just another name for a variable.

why we want different name for same memory ?

==> We use reference variables (different names for the same memory)
    because they make programming 
    easier, safer, and more efficient in certain cases


*/
#include<iostream>
using namespace std;
int main()
{
    int i = 5;

    int &j = i;
    
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

 //same memory different names


return 0;
}