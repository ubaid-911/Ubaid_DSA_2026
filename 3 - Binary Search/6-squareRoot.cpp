#include <iostream>
using namespace std;

float squareRoot( int n ) {
    
    int s = 0;
    int e = n;
    int ans =-1;
    
    while(s<=e) {
        int mid = s + ( e-s)/2;
        int square = mid * mid;

        if( square == n) {
          
            return mid;
        }
        if( square < n) {  
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int result = squareRoot(x);
    cout << "Square root of " << x << " is: " << result << endl;

    return 0;
}
/*

here 
s=0
e = n -1 --> 
n = 10
int ans = -1;

1st Iteration: s = 0, e = 9
                mid = s + (e - s) / 2 = 0 + (9 - 0) / 2 = 4
                square = 4 * 4 = 16
            Condition: 16 > 10 → go left → e = mid - 1 = 3


2nd Iteration: s = 0, e = 3
                mid = 0 + (3 - 0) / 2 = 1
                square = 1 * 1 = 1
             Condition: 1 < 10 → update ans = 1, s = mid + 1 = 2


3rd Iteration: s = 2, e = 3
                mid = 2 + (3 - 2) / 2 = 2
                square = 2 * 2 = 4
            Condition: 4 < 10 → update ans = 2, s = mid + 1 = 3


4th Iteration: s = 3, e = 3
                mid = 3 + (3 - 3) / 2 = 3
                square = 3 * 3 = 9
            Condition: 9 < 10 → update ans = 3, s = mid + 1 = 4


Loop Ends:
s = 4, e = 3 → s > e → break


So, square root of 10 = 3

*/ 

