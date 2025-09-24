#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class SpecialStack {

    stack<int> s;
    int mini = INT_MAX;

public:

    void push(int data) {
        //for first element
        if(s.empty()) {
            s.push(data);
            mini = data;
        }
        else
        {
            if(data < mini) {
                s.push(2*data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty()){
            return -1;
        }

        int curr = s.top();
        s.pop();
        if(curr > mini) {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty())
            return -1;

        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty())
            return -1;

        return mini;
    }
};

int main() {
    SpecialStack st;

    st.push(5);
    st.push(2);
    st.push(8);
    st.push(1);

    cout << "Current Min: " << st.getMin() << endl; // should print 1
    cout << "Top Element: " << st.top() << endl;   // should print 1

    cout << "Popped: " << st.pop() << endl;        // pops 1
    cout << "New Min: " << st.getMin() << endl;    // should print 2

    cout << "Popped: " << st.pop() << endl;        // pops 8
    cout << "New Min: " << st.getMin() << endl;    // should print 2

    cout << "Popped: " << st.pop() << endl;        // pops 2
    cout << "New Min: " << st.getMin() << endl;    // should print 5

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

