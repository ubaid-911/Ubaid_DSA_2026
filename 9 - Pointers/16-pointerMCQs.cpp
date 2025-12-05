#include<iostream>
using namespace std;
int main()
{

    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;   

return 0;
}
/*

arr = abcde
      ^
      p  -- ( condition => p++ )

arr = abcde
       ^
       p  -- (we know the condition of char type )

output : bcde

*/