// Create 3 nodes
// Link them together
// Print the list

#include <iostream>
using namespace std;

struct Node{
        int data;
        Node* next;
    };
    
void printList( Node* head){
    while(head !=nullptr){
        cout << head->data << "->" ;
        head = head -> next ;
    }
    cout << "NULL\n";
}
    
int main() {
    //creation of 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    //assign value
    head->data = 10;
    second->data = 20;
    third->data =30;
    
    //link together
    head->next = second;
    second->next = third;
    third->next = nullptr;
    
    printList(head);
    
    return 0;
}