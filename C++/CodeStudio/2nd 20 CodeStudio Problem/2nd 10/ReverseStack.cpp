#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int element) {

    // Base case
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {

    // Base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

void printStack(stack<int> s)
{
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Original Stack: ";
    printStack(s);

    reverseStack(s);

    cout << "Reversed Stack: ";
    printStack(s);

    return 0;
}

