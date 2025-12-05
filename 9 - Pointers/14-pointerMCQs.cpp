#include<iostream>
using namespace std;
int main()
{

    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;

return 0;
}
/*

    ch = a 
         ^
         p  --( condition => ch++)     so, a of ch++ is b

output : b


*/