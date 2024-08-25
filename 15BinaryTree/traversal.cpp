#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    // constructor
    node(int hello) {
        this->data = hello;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void preorder(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void Inorder(node* root) {
    // base case
    if (root == nullptr) {
        return;
    }
   
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void postorder( node* root){
    // base case
    if (root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main() {
    node* root = new node(1);
    root->left = new node(2);   // Initialize left child
    root->right = new node(3);  // Initialize right child

    /*

        1
       / \
      2   3

    */

    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    /*
            1
          /   \
         2     3 
        / \   / \
       4   5 6   7

    */
    cout<<" preorder traversal of the tree :- ";
    preorder(root);
    cout<<endl;

    cout<<" Inorder traversal of the tree  :- ";
    Inorder(root);
    cout<<endl;

    cout<<" postorder traversal of the tree  :- ";
    postorder(root);
    cout<<endl;


    return 0;
}
;