#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:

    void reverseQueue(queue<int> &q) {

        stack<int> s;

        // Move all elements from queue to stack
        while (!q.empty())
        {
          int element = q.front();
          q.pop();
          s.push(element);
        }

        // Move them back to queue (reversed)
        while (!s.empty())
        {
           int element = s.top();
           s.pop();
           q.push(element);
        }
    }
};


int main() {
    Solution sol;
    queue<int> q;


    // Insert some test elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Original Queue: ";
    queue<int> temp = q;  // copy for printing
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the queue
    sol.reverseQueue(q);

    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
