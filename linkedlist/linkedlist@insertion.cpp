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
void insertAtPos(Node* head,int pos){
   Node* posNode = new Node();
   posNode -> data = 100;
   Node* temp = head;
   for(int i=1;i<pos;i++){    
        temp = temp -> next ;    
   }   
   posNode->next = temp->next;   
   temp->next = posNode;         
}

//delete at first
void deleteAtFirst(Node*& head){
    Node* temp = head;
    head = head->next;
    delete temp;
    
}

//deletion at end
void deleteAtEnd(Node* head){
    Node* temp = head;
    while (temp->next->next != nullptr) { 
        temp = temp->next;
    }    
    delete temp->next;   
    temp->next = nullptr; 
    
}

//deletion at a position
void deleteAtPosition(Node*& head,int pos){
    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

}

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
    // insertAtEnd(head);
    // insertAtPos(head,2);
    // deleteAtEnd(head);
    // deleteAtEnd(head);
    // deleteAtPosition(head,2);
    // printList(head);
    
    return 0;
}
