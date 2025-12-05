#include<iostream>
using namespace std;
int main()
{

    // count = 0  ,  temp = n   ,  if n==0 return 1  ,  while(t != 0) t = t / 10 count++

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int count = 0;
    int temp = n;

    if(n == 0) {
        return 1;
    }
    while(temp != 0) {
        temp = temp /10;
        count++;
    }

    cout << " Total is : " << count << endl;

return 0;
}