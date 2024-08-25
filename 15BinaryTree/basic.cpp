#include <iostream>
using namespace std;

class node{
    public:
    int data ;
    node* left;
    node* right;
    // constructor called
    node(int hello)
    {
        this->data = hello ;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int main()
{
    node* root=new node(5);
    root->left->data=2;
    root->right->data=3;

/*

    1
   / \
  2   3 

*/

    root->left->left = new node(4);
    root->left->right=new node(5);

    

/*
        
    1
   / \
  2   3 
 / \
4   5

*/
    
    
   
    return 0;
}
