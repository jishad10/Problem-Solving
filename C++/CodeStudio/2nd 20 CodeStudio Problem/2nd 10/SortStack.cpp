#include <iostream>
#include <stack>
using namespace std;


void sortedInsert(stack<int> &stack, int num) {

    // Base case
    if (stack.empty() || stack.top() < num)
    {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // Recursive call
    sortedInsert(stack, num);

    // Insert the popped element back into the stack
    stack.push(n);
}


void sortStack(stack<int> &stack) {

    // Base case
    if (stack.empty()) {
        return;
    }

    // Pop the top element
    int num = stack.top();
    stack.pop();

    // Recursively sort the remaining stack
    sortStack(stack);

    // Insert the popped element in sorted order
    sortedInsert(stack, num);
}

int main() {
    stack<int> myStack;

    myStack.push(30);
    myStack.push(-5);
    myStack.push(18);
    myStack.push(14);
    myStack.push(-3);


    cout << "Stack before sorting: ";
    stack<int> tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    sortStack(myStack);

    cout << "Stack after sorting: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}

