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
void insertAtlast(Node*& head, int newData) {
    // Step 1: Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;  // last node points to NULL

    // Step 2: If list is empty, new node becomes head
    if (head == nullptr) {
        head = newNode;
        return;
    }
    
     // Step 3: Traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Step 4: Link last node to new node
    temp->next = newNode;
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
    insertAtlast(head, 5);

    cout << "After inserting 5 at last: ";
    printList(head);

    return 0;
}
