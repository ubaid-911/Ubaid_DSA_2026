#include<iostream>
using namespace std;
int main()
{
    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;

return 0;
}
/*

str = babbar
      ^
      p   here str[0] is b and p[0] is also b

output : b  b

*/