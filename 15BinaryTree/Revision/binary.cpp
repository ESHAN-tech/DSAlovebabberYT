#include <iostream>
using namespace std;

class root {
public:
    int data;
    root* right;
    root* left;

    // Constructor
    root(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void preorder(root* parent) {
    if (parent == nullptr) {
        return;
    }
    cout << parent->data << " ";
    preorder(parent->left);
    preorder(parent->right);
}
void inorder (root* parent){

    if (parent == nullptr) {
        return;
    }

    preorder(parent->left);
    cout << parent->data << " ";
    preorder(parent->right);
}

void postorder(root* parent){
    if (parent == nullptr) {
        return;
    }

    preorder(parent->left);
    preorder(parent->right);
    cout << parent->data << " "; 

}
int main() {
    root* parent = new root(1);

    parent->left = new root(2);
    parent->right = new root(3);

    parent->left->left = new root(4);
    parent->left->right = new root(5);

    parent->right->left = new root(6);
    parent->right->right = new root(7);

    /*
         1
       /   \
      2     3 
     / \   / \
    4   5 6   7
    */
    cout<<" pre order traversal : -";
    preorder(parent);
    cout<<endl<<endl;

    cout<<" In order traversal : -";
    inorder(parent);
    cout<<endl<<endl;

    cout<<" In order traversal : -";
    postorder(parent);
    cout<<endl<<endl;

    return 0;
}
