#include <bits/stdc++.h>
using namespace std;

class CircularQueue {

    int *arr;
    int front;
    int rear;
    int size;

public:

    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        //to check whether queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) )
        {
            cout << "Queue is Full!" << endl;
            return false;
        }
        else if(front == -1) //first element to push
        {
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0)
        {
            rear = 0;  //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;

        return true;
    }


    int dequeue(){
        if(front == -1)
        {//to check queue is empty
            cout << "Queue is Empty!" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)
        { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1)
        {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};


int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Dequeued: " << q.dequeue() << endl; // removes 10
    cout << "Dequeued: " << q.dequeue() << endl; // removes 20

    q.enqueue(60); // should wrap around
    q.enqueue(70); // should wrap around

    // Trying one more insert (should say Full)
    q.enqueue(80);

    cout << "Dequeued: " << q.dequeue() << endl; // removes 30
    cout << "Dequeued: " << q.dequeue() << endl; // removes 40
    cout << "Dequeued: " << q.dequeue() << endl; // removes 50
    cout << "Dequeued: " << q.dequeue() << endl; // removes 60
    cout << "Dequeued: " << q.dequeue() << endl; // removes 70
    cout << "Dequeued: " << q.dequeue() << endl; // should say Empty

    return 0;
}
