#include <iostream>  //------------ Sieve of Eratosthenes.
#include <vector>
using namespace std;

int countPrimes(int n) {
    int cnt = 0;
    vector<bool> prime(n+1, true);  // assume sab prime hai initially

    prime[0] = prime[1] = false;    // 0 aur 1 prime nahi hote

    for (int i = 2; i < n; i++) {
        if (prime[i]) {   // agar i prime mila
            cnt++;        // count badhao

            // multiples of i ko prime mark se hatao
            for (int j = 2*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    return cnt;
}

int main() {
    int n = 20;
    cout << "Number of primes less than " << n << " = " << countPrimes(n) << endl;
    return 0;
}            

/*

Dry Run (n = 20)
Start cnt=0

i=2 → prime[2]=true → cnt=1 → mark 4,6,8,10,12,14,16,18

i=3 → prime[3]=true → cnt=2 → mark 6,9,12,15,18

i=4 → prime[4]=false (skip)

i=5 → prime[5]=true → cnt=3 → mark 10,15

i=7 → cnt=4 …

Final primes < 20 = 8 (2,3,5,7,11,13,17,19)


*/