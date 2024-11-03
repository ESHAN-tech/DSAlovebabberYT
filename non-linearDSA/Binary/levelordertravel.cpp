#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        node* left = nullptr;
        node* right = nullptr;
    }
};
void printLevelOrder(node* root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node -> left){//left part null ni h to
            q.push(node->left);// ager null ni hai queue me push
            }if(node->right){
                q.push(node->right);
            }

            }
            else if(!q.empty())
            q.push(NULL);
        }
    
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    printLevelOrder(root);
    return 0;
}