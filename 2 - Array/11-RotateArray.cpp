#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool rotate(vector<int>& v,int k){
int n=v.size();
vector<int>temp(n);
for(int i = 0 ;i < n; i++){
    temp[(i+k)%n] =v[i];
}

v=temp;
}
int main() 
{

vector<int>v={1,2,3,4,5,6,7};
int k=3;
rotate(v,k);
cout<<"Rotated Array ";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}

/*
bool rotate(vector<int>nums&,int k){
int n=nums.size();
vector<int>temp(n);

for(int i=0;i<n;i++){

temp[(i+k)%n]=nums[i];
}
nums=temp

}






*/