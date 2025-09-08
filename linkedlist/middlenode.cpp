#include <iostream>
using namespace std;

//declaring the node
struct Node{
    int data;
    Node* next;
};

//print the list through traversal
void printList(Node* head){
    int count=0;
    Node* temp = head;
    while(temp!=nullptr){
        cout<< temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    cout<< " NULL" <<endl;
    temp=head;
     for(int i=0; i<count/2; i++){
        temp = temp->next ;
    }
    cout << "Middle element data is : "<<  temp->data ;
    
}

// void middleNode(Node* head){
//     int count;
//     Node* temp =head;
//     for(int i=1; i<count/2; i++){
//         temp = temp->next ;
//     }
//     cout << "Middle element data is : "<<  temp->data ;
//     }


int main(){

     //creation of 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    //assign values
    //connect them each other
    head -> data = 10;     head -> next = second; 
    second -> data = 20;   second -> next = third;   
    third -> data = 30;    third -> next = fourth;
    fourth -> data = 40;   fourth -> next = fifth;
    fifth -> data = 50;   fifth -> next = nullptr;

    //call functions
    printList(head);
    
    
    return 0;
}
