#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


Node* getMiddle(Node* head) {

    // Base cases
    if (head == NULL || head->next == NULL)
        return head;

    // If there are exactly two nodes, return the second one
    if (head->next->next == NULL)
        return head->next;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}


Node* findMiddle(Node* head) {
    return getMiddle(head);
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = NULL;

    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    // Print the original list
    cout << "Original Linked List: ";
    printList(head);

    // Find and print the middle node
    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle Node: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}

