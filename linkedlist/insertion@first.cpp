#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print the list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next ;
    }
    cout << "NULL\n";
}

// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int newData) {
    // Step 1: Create a new node
    Node* newNode = new Node();
    newNode->data = newData;

    // Step 2: Point newNode->next to current head
    newNode->next = head;

    // Step 3: Move head to point to newNode
    head = newNode;
}

int main() {
    // Create initial list: 10 -> 20 -> 30
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;  head->next = second;
    second->data = 20; second->next = third;
    third->data = 30;  third->next = nullptr;

    cout << "Original list: ";
    printList(head);

    // Insert 5 at the beginning
    insertAtBeginning(head, 5);

    cout << "After inserting 5 at beginning: ";
    printList(head);

    return 0;
}
