#include<iostream>
using namespace std;

int f(int n) {

    if(n <= 1) return n;

    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;

}

int main()
{

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << f(n);

return 0;
}
/*

                 f(4)
                /    \
               /      \
             f(3)     f(2)
             / \       /   \
            /   \     /     \
          f(2)  f(1) f(1)   f(0)
           / \
          /   \
        f(1)  f(0)
 









*/