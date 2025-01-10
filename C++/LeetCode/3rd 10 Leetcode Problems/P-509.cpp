#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        // Base case
        if (n == 0)
        {
            return 0;
        }

        if (n == 1)
        {
            return 1;
        }

        // Recursive call
        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter a number to find the Fibonacci value: ";
    cin >> n;

    int result = solution.fib(n);
    cout << "The Fibonacci value for " << n << " is: " << result << endl;

    return 0;
}

