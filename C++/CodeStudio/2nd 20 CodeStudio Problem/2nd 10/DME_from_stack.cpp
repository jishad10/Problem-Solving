#include <iostream>
#include <stack>
using namespace std;


void solve(stack<int>& inputStack, int count, int size) {

    // Base case
    if (count == size / 2)
    {
        inputStack.pop(); // Remove the middle element
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call to reach the middle element
    solve(inputStack, count + 1, size);

    // Push the elements back after removing the middle one
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int N) {

    int count = 0;
    solve(inputStack, count, N);
}

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Stack before deleting middle element: ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Deleting middle element
    deleteMiddle(st, st.size());

    cout << "Stack after deleting middle element: ";
    temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
