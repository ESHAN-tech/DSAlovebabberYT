#include <iostream>
using namespace std;

class node{
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

int search(int inorder[] , int start , int end){
    for(int i = start; i <=end ; i++){
        if(ino)
    }
}

node* buildTree(int preorder[] , int inorder[] ,int start , int end){
    static int idx = 0;
    //base condition 
    if(start > end ){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* node = new node(curr);
    if(start == end){
        // mtlb inorder me ek he element hai
        return node;
    }

    // ab node k left or right sub tree ko buil kerna hai

    int pos = serach(inorder , start , end , curr);
    node->left = builTree(preorder , inorder ,  start , pos-1);
    node->right = buildTree(preorder , inorder , pos+1 , end);
    int pos


}

int main()
{
    int preorder[]={1 , 2 , 4 , 3};

    int inorder[]={4 , 2 , 1 ,5 ,3};

    return 0;
}


/*
hame post or inorder diya hoga usse hame tree construct kerna hai 

preorder me traverse kerna hai or inorder se uski position check kerne hai 

._._._ALGORITHM._._._
1.pre order k last element se start hoga(bcoz root is in lest last)...
2.end se pick kerte-kerte ham a jayenge end-1 tak(decrement postorder idx)...
3.or jis element ka abhi node banya hai use serach karenge apne inorder me...
4.pahle buil  right subtree ko or node k right wale hame denge right subtree...
5.fir build hoga left subtree...wo node k left subtree ho jayegaa
6.return the node...
postorder: 4 , 2 , 5 , 3 , 1
Inorder: 4 , 2 , 1 , 5 , 3

*/