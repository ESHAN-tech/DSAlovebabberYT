#include <iostream>
#include <algorithm>
using namespace std;

class BinaryTree {
public:
    int data;
    BinaryTree* left;
    BinaryTree* right;

    // Constructor
    BinaryTree(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int 
int calcDiameter(BinaryTree* root) {
    if (root == nullptr) {
        return 0;
    }
    //fetch kerta jayega left node ko last tak or ager null ho gaya to stop
    int lHeight = calcDiameter(root->left);
    int rHeight = calcDiameter(root->right);
    int currDiameter = lHeight+ rHeight + 1;

    int lDiameter=calcDiameter(root->left);
    int rDiameter=calcDiameter(root->right);
}


int main() {
/*

      1
     / \
    2   3
   / \   \
  4   5   6

diameter is 5

*/
    BinaryTree* root = new BinaryTree(1);

    // Correct way to create and link nodes
    root->left = new BinaryTree(2);
    root->right = new BinaryTree(3);

    root->left->left = new BinaryTree(4);
    root->left->right = new BinaryTree(5);

    root->right->left = new BinaryTree(6);
    root->right->right = new BinaryTree(7);

    cout << "Height of the tree: " << calcDiameter(root) << endl;

    return 0;
}

