#include<iostream>
using namespace std;
int main()
{

    int *p = 0;
    int first = 110;
    p = &first;
    cout << *p << endl;

return 0;
}
/*

value of p = 0  ---(*p = 0)

  f = 110
  ^
  p --> address of f (&f)
 *p = 110
  
  cout = *p

output : 110


*/