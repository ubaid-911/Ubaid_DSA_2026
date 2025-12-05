#include<iostream>
using namespace std;

int main()
    { 
        char *p; 
        char str[] = "pqrstuv";
        p = str;
        p += 3;
        cout << p;

        return 0;
}
/*


    str = p q r s t u v
          ^
         *p ---( condition => p = p + 3 )

            0 1 2 3 
        p = p q r s t u v --( we know the condition of char type)
        p = s t u v


output : stuv



*/