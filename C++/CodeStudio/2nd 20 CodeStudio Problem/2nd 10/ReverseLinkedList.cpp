#include <iostream>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;

    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverse1(LinkedListNode<int> *head)
{
    // Base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    LinkedListNode<int> *chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    return reverse1(head);
}

// Function to print the linked list
void printList(LinkedListNode<int> *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main()
{
    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    LinkedListNode<int> *head = new LinkedListNode<int>(1);
    head->next = new LinkedListNode<int>(2);
    head->next->next = new LinkedListNode<int>(3);
    head->next->next->next = new LinkedListNode<int>(4);
    head->next->next->next->next = new LinkedListNode<int>(5);

    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
