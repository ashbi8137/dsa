#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    //constructor
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};

void preorder(Node* root){
    if(root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root-> right);
}
void inorder(Node* root){
    if(root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = new Node(10);
    Node* left = new Node(5);
    Node* right = new Node(15);

    root->left = left;
    root->right = right;

    //tree traversal
    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
