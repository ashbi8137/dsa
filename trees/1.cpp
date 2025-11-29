//bst traversal
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    //constructor
    Node(int val) : data(val), left(nullptr), right(nullptr){}
};

Node* bstInsertion(Node* root,int val){
    if(root == nullptr){
        return new Node(val);
    }
    if(val > root->data){
        root->right =  bstInsertion(root->right,val);
    }
    else{
        root->left = bstInsertion(root->left,val);
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);          // left
    cout << root->data << " ";    // root
    inorder(root->right);         // right
}

int main(){
    Node* root = nullptr;
    root = bstInsertion(root,10);
    root = bstInsertion(root, 5);
    root = bstInsertion(root, 20);
    root = bstInsertion(root, 3);
    root = bstInsertion(root, 7);
    root = bstInsertion(root, 15);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}