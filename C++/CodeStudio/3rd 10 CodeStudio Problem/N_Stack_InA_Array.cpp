#include <bits/stdc++.h>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;

    int n, s;
    int freespot;

public:
    // Initialize your data structure
    // Constructor
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // Initialize top
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // Initialize next
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }

        //update last index value to -1
        next[s - 1] = -1;

        // Initialize freespot
        freespot = 0;
    }


    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check for overflow
        if (freespot == -1)
        {
            return false;
        }

        // Find index
        int index = freespot;

        // insert element into array
        arr[index] = x;

        //update freespot
        freespot = next[index];

        //update next
        next[index] = top[m - 1];

        //update top
        top[m - 1] = index;

        return true;
    }

    // Pop operation
    int pop(int m)
    {
        //check underflow condition
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];  // top index
        top[m - 1] = next[index]; // move top pointer

        next[index] = freespot; // free this index
        freespot = index;

        return arr[index];
    }
};


int main()
{
    // Create 3 stacks in an array of size 10
    NStack st(3, 10);

    // Push elements into different stacks
    st.push(10, 1);
    st.push(20, 1);
    st.push(30, 2);
    st.push(40, 3);
    st.push(50, 2);

    cout << "Pop from stack 1: " << st.pop(1) << endl; // should print 20
    cout << "Pop from stack 2: " << st.pop(2) << endl; // should print 50
    cout << "Pop from stack 3: " << st.pop(3) << endl; // should print 40
    cout << "Pop from stack 1: " << st.pop(1) << endl; // should print 10
    cout << "Pop from stack 1: " << st.pop(1) << endl; // empty → -1

    return 0;
}

