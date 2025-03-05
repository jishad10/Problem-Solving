#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to reverse nodes in groups of k
Node* kReverse(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    // Reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    // Count the nodes to check if we have k nodes
    Node* temp = head;
    int nodeCount = 0;
    while (temp != NULL && nodeCount < k) {
        temp = temp->next;
        nodeCount++;
    }

    // Reverse only if we have at least k nodes
    if (nodeCount == k) {
        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Recursively reverse next group and link
        head->next = kReverse(next, k);

        return prev;  // New head after reversal
    }

    // If remaining nodes are less than k, return head as it is
    return head;
}

// Utility function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to create a linked list from an array
Node* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

int main() {
    int n, k;
    std::cout << "Enter number of nodes: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter linked list elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter k: ";
    std::cin >> k;

    Node* head = createList(arr, n);

    std::cout << "Original List: ";
    printList(head);

    head = kReverse(head, k);

    std::cout << "Reversed List in groups of " << k << ": ";
    printList(head);

    return 0;
}
