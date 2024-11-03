#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

//(R00t_left_right)
void preorder(struct node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

//_left_Root_right_
void inorder(struct node* root){
 if(root == nullptr){
        return;
    } 
    preorder(root->left);
    cout<<root->data <<" ";
    preorder(root->right);
}

//left-right-Root
void postorder(struct node* root){
 if(root == nullptr){
        return;
    } 
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
    cout<<root->data <<" ";
}

int main()
{
    node* binary = new node(10);
    binary -> left =new node(11);
    binary -> right = new node(12);
    binary -> left -> left = new node(13);
    binary -> left -> right = new node(14);

    cout<<endl;

    preorder(binary);
    cout<<endl;

    inorder(binary);
    cout<<endl;

    postorder(binary);
    return 0;
    
}
