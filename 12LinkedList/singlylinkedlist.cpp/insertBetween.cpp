#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

void insertBetween(node*& head, int d, int pos) {
    node* temp = new node(d);
  

    node* p = head;
    int count = 1;

    // Traverse to the node just before the position
    while (p != nullptr && count < pos - 1) {
        p = p->next;
        count++;
    }

    // Inserting the new node
    temp->next = p->next;
    p->next = temp;
}

void print(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10);  // Dynamically allocate the first node
    
    node* head = node1;
    node* tail = node1;

    insertBetween(head, 150, 2);  // Inserting at position 2
    insertBetween(head, 30, 2);  // Inserting at position 2 (between 10 and 150)
    insertBetween(head, 400, 4);  // Inserting at position 4 (after 30)

    print(head);

  

    return 0;
}
