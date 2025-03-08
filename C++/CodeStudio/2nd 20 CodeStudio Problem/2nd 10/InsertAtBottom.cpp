#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& s, int x) {

    // Base case: If stack is empty, push the element
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Store the top element and pop it
    int num = s.top();
    s.pop();

    // Recursive call to reach the bottom
    solve(s, x);

    // Push the stored element back
    s.push(num);
}

// Function to push element at bottom
stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    solve(myStack, x);
    return myStack;
}


int main() {
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Stack before pushing at bottom: ";
    stack<int> temp = myStack;  // Create a copy to print elements
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Push element at the bottom
    int x = 9;
    myStack = pushAtBottom(myStack, x);

    cout << "Stack after pushing " << x << " at bottom: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}

