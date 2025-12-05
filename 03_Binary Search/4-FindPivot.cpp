#include<iostream>
using namespace std;

int Pivot(int arr[], int size  ){
    int s=0,e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
// if arr[mid] is greater then or equal to  the first element it may be on the right side s=mid+1
           if(arr[mid]>=arr[0]){
            s=mid+1;
           }else{
            //else it must be on the left side 
            //burt we dont have to leave the mid value becuse mid value must also be the pivort value of smallest element
            e=mid;
           }
    }
return s;
}
int main()
{
int arr[]={8,10,17,1,3};                                   
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"Pivot Element is " <<Pivot(arr,size);

return 0;
} 


/*
 n=5 e=n-1 e=4 s=0
 mid=2;  arr[mid]=17 arr[s]=8 arr[e]=3

8,10,17   ,1,3
0 1  2     3 4


if(arr[mid]>=arr[0]){      1st =17>=8
s=mid+1                    2nd= 1>=

}










*/