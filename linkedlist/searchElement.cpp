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

void searchElement(Node* head){
    int search,searchpos;
    cout << "Enter the data you want to search: "<<endl;
    cin >> search;
    Node* temp =head;
    int i=1;
    while(temp!=nullptr){
        if(temp->data ==  search){
            searchpos = i;
        }
        temp = temp->next;
        i++;
    }
    cout << "searching value : " << search << " is at position : " << searchpos << endl;
}

void searchPosition(Node* head){
     int searchpos;
    cout << "Enter the index of the element you want to search: "<<endl;
    cin >> searchpos;
    int i=1;
    Node* temp=head;
    while(temp!=nullptr){
        if(searchpos==i){
            cout << temp->data ;
        }
        temp=temp->next;
        i++ ;
    }
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
    // printList(head);

    searchElement(head);
    searchPosition(head);
    
    

    
    return 0;
}
