#include <iostream>
using namespace std;

// This struct node just creates the node. Before that, there is a null node.
class node {
public:
    int data; // data value of the node
    node* next; // this pointer stores the address of the next node

    // calling the constructor
    node(int d) { // this is a parameterized constructor
        this->data = d;
        this->next = nullptr; // Initialize the next pointer to nullptr
    }
};

void print(node*& head) {
    node* temp = head; // start from the head node
    while (temp != nullptr) {
        cout << temp->data << " "; // print the data value of the node
        temp = temp->next; // move to the next node
    }
    cout << endl;
}

int main() {
    node* head = new node(10); // initialize the head node with a value
    head->next = new node(20); // add a second node
    head->next->next = new node(30); // add a third node

    print(head);

    // system("pause");
    return 0;
}
