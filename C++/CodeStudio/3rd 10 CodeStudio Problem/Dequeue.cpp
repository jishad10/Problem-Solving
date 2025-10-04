#include <iostream>
using namespace std;

class Deque
{
    int *arr;
    int front;
    int rear;
    int size;

public:

    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }


    bool pushFront(int x)
    {
        if( isFull() )
        {
            cout << "Deque is Full! Cannot pushFront " << x << endl;
            return false;
        }
        else if(isEmpty())
        {
            front  = rear = 0;
        }
        else if(front == 0 && rear != size-1)
        {
            front = size-1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }


    bool pushRear(int x)
    {
        if( isFull() )
        {
            cout << "Deque is Full! Cannot pushRear " << x << endl;
            return false;
        }
        else if(isEmpty())
        {
            front  = rear = 0;
        }
        else if(rear == size-1 && front != 0)
        {
            rear = 0;
        }
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
    }


    int popFront()
    {
        if(isEmpty())
        {
            cout << "Deque is Empty! Cannot popFront" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)
        {
            front = rear = -1;
        }
        else if(front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }


    int popRear()
    {
        if(isEmpty())
        {
            cout << "Deque is Empty! Cannot popRear" << endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear)
        {
            front = rear = -1;
        }
        else if(rear == 0)
        {
            rear = size-1;
        }
        else
        {
            rear--;
        }
        return ans;
    }


    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }


    int getRear()
    {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }


    bool isEmpty()
    {
        return (front == -1);
    }


    bool isFull()
    {
        if( (front == 0 && rear == size-1) || ((rear + 1) % size == front) )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main() {
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushFront(3);
    dq.pushRear(25);

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    cout << "Popping from front: " << dq.popFront() << endl;
    cout << "Popping from rear: " << dq.popRear() << endl;

    cout << "Front element after pops: " << dq.getFront() << endl;
    cout << "Rear element after pops: " << dq.getRear() << endl;

    dq.pushRear(30);
    cout << "After pushing 30 at rear, rear element: " << dq.getRear() << endl;

    return 0;
}

