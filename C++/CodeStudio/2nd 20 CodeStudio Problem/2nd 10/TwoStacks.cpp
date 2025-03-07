#include <iostream>
using namespace std;

class TwoStack {

	int *arr;
    int top1;
    int top2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num) {
        //atleast a empty space present
        if(top2 - top1 > 1 ) {
            top1++;
            arr[top1] = num;
        }

    }

    // Push in stack 2.
    void push2(int num) {
         if(top2 - top1 > 1 ) {
            top2--;
            arr[top2] = num;
        }

    }

    // Pop from stack 1 and return popped element.
    int pop1() {
		if( top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
		if( top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

};

int main() {
    TwoStack ts(6);

    // Pushing elements into Stack 1
    ts.push1(10);
    ts.push1(20);
    ts.push1(30);

    // Pushing elements into Stack 2
    ts.push2(60);
    ts.push2(50);
    ts.push2(40);

    // Popping elements from Stack 1
    cout << "Popped from Stack 1: " << ts.pop1() << endl;
    cout << "Popped from Stack 1: " << ts.pop1() << endl;

    // Popping elements from Stack 2
    cout << "Popped from Stack 2: " << ts.pop2() << endl;
    cout << "Popped from Stack 2: " << ts.pop2() << endl;

    return 0;
}

