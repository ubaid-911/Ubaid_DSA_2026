
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> reverse (vector<int>v) {

    int s = 0, e = v.size()-1;

    while(s<=e) {
        swap(v[s] , v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    print(ans);

return 0;
}
/*

v = {11, 7, 3, 12, 4}

Index :

  0   1   2   3   4
  [11, 7, 3, 12, 4]


1st iteration:
               s = 0, e = 4
               v[s] = 11, v[e] = 4

               swap(v[s], v[e])
               --> swap(11, 4)

               Result: v = {4, 7, 3, 12, 11}
               s = 1, e = 3

 2nd iteration:
               s = 1, e = 3
               v[s] = 7, v[e] = 12

               swap(v[s], v[e])
               --> swap(7, 12)

               Result: v = {4, 12, 3, 7, 11}
               s = 2, e = 2

 3rd iteration:
               s = 2, e = 2
               v[s] = 3, v[e] = 3

               swap(v[s], v[e])
               --> swap(3, 3) (no change)

               Result: v = {4, 12, 3, 7, 11}
               s = 3, e = 1 → loop ends (s > e)


               Final Reversed Vector:
               {4, 12, 3, 7, 11}






*/