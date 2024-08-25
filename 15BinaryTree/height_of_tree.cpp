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

int calcHeight(BinaryTree* root) {
    if (root == nullptr) {
        return 0;
    }
    //fetch kerta jayega left node ko last tak or ager null ho gaya to stop
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight, rHeight) + 1;
}

int main() {
    BinaryTree* root = new BinaryTree(1);

    // Correct way to create and link nodes
    root->left = new BinaryTree(2);
    root->right = new BinaryTree(3);

    root->left->left = new BinaryTree(4);
    root->left->right = new BinaryTree(5);

    root->right->left = new BinaryTree(6);
    root->right->right = new BinaryTree(7);

    cout << "Height of the tree: " << calcHeight(root) << endl;

    return 0;
}
