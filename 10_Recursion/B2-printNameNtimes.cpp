#include<iostream>
using namespace std;

void printName(string name , int n) {

    if(n == 0)
    return;

    else{
        cout << name << endl;
        
   }
    printName(name , n-1);
}

int main()
{

    string name;
    int n;
    cout << "Enter your name : ";
    cin >> name;

    cout << "How many times it should repeat : ";
    cin >> n;

    printName(name , n);

return 0;
}