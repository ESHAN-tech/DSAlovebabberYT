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
        this-> right = nullptr;
    }

};
//(R00t_left_right)
void PreOrder(node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//Inorder(Left_Root_Right)
void InOrder(node* root){
    if(root == nullptr){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(node* root){
    if(root == nullptr){
        return;
    }
    InOrder(root->left);
    InOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    cout<<"PreOrder:- ";
    PreOrder(root);
    cout<<endl;
   

    cout<<"In-Order:- ";
    InOrder(root);
    cout<<endl;
    

    cout<<"PostOrder:- ";
    PostOrder(root);
    cout<<endl;
    


    return 0;
}
