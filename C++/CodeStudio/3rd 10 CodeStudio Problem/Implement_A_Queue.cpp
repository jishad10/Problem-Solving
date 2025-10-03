#include <bits/stdc++.h>
using namespace std;

class Queue {

    int* arr;
    int qfront;
    int rear;
    int size;

public:
    // Constructor
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            // If queue becomes empty after removing → reset qfront and rear to 0.
            // bcz samner empty space golo jate na thake
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else {
            return arr[qfront];
        }
    }
};


int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;  // Should print 10

    cout << "Dequeued: " << q.dequeue() << endl;    // Removes 10
    cout << "Front element: " << q.front() << endl;  // Should print 20

    cout << "Dequeued: " << q.dequeue() << endl;    // Removes 20
    cout << "Dequeued: " << q.dequeue() << endl;    // Removes 30

    if(q.isEmpty())
        cout << "Queue is empty now!" << endl;

    return 0;
}


