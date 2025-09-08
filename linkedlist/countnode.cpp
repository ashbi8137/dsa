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
    int count = 0 ;
    while(temp!=nullptr){
        cout<< temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    cout<< " NULL" <<endl;
    cout << count ;
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
    
    return 0;
}
