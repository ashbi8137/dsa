#include <iostream>
using namespace std;

//declaring the node
struct Node{
    int data;
    Node* next;
};

//print the list through traversal
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<< temp->data << " -> ";
        temp = temp->next;
    }
    cout<< " NULL" <<endl;
}

//function for insertion at beginning
void insertAtBeginning(Node*& head){
    Node* startNode = new Node();
    startNode -> data = 5;
    startNode ->next = head;
    head = startNode;
    cout << " " << endl;

}

//function for insertion at end
void insertAtEnd(Node* head){
   Node* endNode = new Node();
   endNode -> data = 50;
   endNode->next = nullptr;
   Node* temp =head;
   while(temp->next !=nullptr){
        temp = temp->next;
   }
    temp->next = endNode;


}
//function for insertion at specific position

int main(){

    //creation of 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    //assign values
    //connect them each other
    head -> data = 10;     head -> next = second; 
    second -> data = 20;   second -> next = third;   
    third -> data = 30;    third -> next = nullptr;

    //call functions
    printList(head);
    // insertAtBeginning(head);
    insertAtEnd(head);
    printList(head);

   
    


    return 0;
}
