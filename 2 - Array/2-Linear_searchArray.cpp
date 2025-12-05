#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;

    cout << " Enter the Number :" ;
    cin>>key;

    for(int i=0; i<n; i++){

        if(arr[i] == key) {
            cout << " Index is :" << i << endl;
            return 0;
        }
    }
    cout << " Not Found " << endl;
    
return 0;
}