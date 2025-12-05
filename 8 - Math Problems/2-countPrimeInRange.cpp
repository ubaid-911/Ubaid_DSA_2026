#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void segmentedSieve(int L, int R) {
    int limit = sqrt(R);
    vector<bool> prime(limit+1, true);
    vector<int> primes;

    // STEP 1: simple sieve till √R
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            primes.push_back(i);
            for (int j = i*i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    // STEP 2: assume all [L..R] prime
    vector<bool> isPrime(R-L+1, true);

    // STEP 3: cut multiples
    for (int p : primes) {
        int start = max(p*p, ( (L+p-1)/p ) * p);
        for (int j = start; j <= R; j += p) {
            isPrime[j-L] = false;
        }
    }

    // STEP 4: print primes
    for (int i = 0; i <= R-L; i++) {
        if (isPrime[i] && (i+L) >= 2) {
            cout << i+L << " ";
        }
    }
    cout << endl;
}

int main() {
    segmentedSieve(10, 20);
    return 0;
}

/*

L = 10 , R = 20
Step 1: Normal sieve till √R
√20 = 4

So, sieve 0…4

Prime check:

2 ✅

3 ✅

4 ❌ (multiple of 2)

👉 Base primes = {2, 3}

Step 2: Assume all numbers from 10…20 are prime
Make array:

[10,11,12,13,14,15,16,17,18,19,20]
isPrime = [T, T, T, T, T, T, T, T, T, T, T]
Step 3: Cut multiples of base primes
Base prime = 2
First multiple of 2 in [10,20] → max(2*2, (10+1)/2 * 2) = max(4, 10) = 10

Cut: 10,12,14,16,18,20

isPrime = [F, T, F, T, F, T, F, T, F, T, F]
Base prime = 3
First multiple of 3 in [10,20] → max(3*3, (10+2)/3 * 3) = max(9, 12) = 12

Cut: 12,15,18

isPrime = [F, T, F, T, F, F, F, T, F, T, F]
Step 4: Collect remaining primes
11 ✅

13 ✅

17 ✅

19 ✅

👉 Final Answer = 11, 13, 17, 19



*/#include <iostream>  // -------(Segmented Sieve)
#include <vector>
#include <cmath>
using namespace std;

void segmentedSieve(int L, int R) {
    int limit = sqrt(R);
    vector<bool> mark(limit+1, true);

    // STEP 1: Normal sieve till √R
    vector<int> primes;
    mark[0] = mark[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (mark[i]) {
            primes.push_back(i);
            for (int j = i*i; j <= limit; j += i) {
                mark[j] = false;
            }
        }
    }

    // STEP 2: Create array for [L, R]
    vector<bool> isPrime(R-L+1, true);

    // STEP 3: Mark multiples of primes in [L,R]
    for (int p : primes) {
        int start = max(p*p, ((L+p-1)/p)*p); // first multiple of p in [L,R]

        for (int j = start; j <= R; j += p) {
            isPrime[j-L] = false;
        }
    }

    // STEP 4: Print primes in [L,R]
    for (int i = 0; i <= R-L; i++) {
        if (isPrime[i] && (i+L) >= 2) {
            cout << (i+L) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L = 10, R = 20;
    cout << "Primes between " << L << " and " << R << ": ";
    segmentedSieve(L, R);
    return 0;
}