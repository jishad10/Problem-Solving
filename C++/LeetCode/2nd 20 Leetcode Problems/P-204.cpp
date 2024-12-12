#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n, true); // Initialize all numbers as prime

        // 0 and 1 are not prime numbers
        if (n <= 1) return 0;
        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++; // Found a prime number
                // Mark all multiples of i as non-prime
                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = solution.countPrimes(n);
    cout << "Number of primes less than " << n << ": " << result << endl;

    return 0;
}

