#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // base conditions
        if (k <= 0 || q.empty() || k > q.size()) return q;

        // reverse first k elements recursively
        reverseHelper(q, k);

        // move remaining (n - k) elements to the back
        int t = q.size() - k;

        while (t--) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }

private:
    void reverseHelper(queue<int> &q, int k) {
        if (k == 0) return;

        int val = q.front();
        q.pop();

        // recursive call
        reverseHelper(q, k - 1);

        // put element back in reversed order
        q.push(val);
    }
};

int main() {
    queue<int> q;
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Enter value of k: ";
    cin >> k;

    Solution obj;
    queue<int> ans = obj.reverseFirstK(q, k);

    cout << "\nQueue after reversing first " << k << " elements:\n";
    while (!ans.empty()) {
        cout << ans.front() << " ";
        ans.pop();
    }
    cout << endl;

    return 0;
}

