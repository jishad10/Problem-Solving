#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
    int res = 1;

    while (n > 0) {
        if (n & 1) {
            // If the current exponent is odd
            res = (1LL * res * x % m) % m;
        }
        // Square the base and reduce the exponent by half
        x = (1LL * x % m * x % m) % m;
        n = n >> 1; // Right shift (equivalent to dividing n by 2)
    }
    return res;
}

int main() {
    int x, n, m;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "Enter modulus (m): ";
    cin >> m;

    int result = modularExponentiation(x, n, m);
    cout << "Result: " << result << endl;

    return 0;
}

