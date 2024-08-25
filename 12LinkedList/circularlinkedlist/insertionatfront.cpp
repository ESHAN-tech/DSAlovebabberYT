#include <iostream>
using namespace std;
class node{
    //it's a singly circular linked list 
    public:
    int data ;
    node* next;
    node(int d){
        this->data = d ;
        this->next = nullptr; 
    }
};

void insertAtFront(node*& head , int d){
    //creating the node 
    node* temp = new node(d);
    if (head == nullptr){
        head = temp;
        // temp->next = head;
    }
    else{
        node* p = head;
        while(p-> next != head){
            p=p->next;
        }
        
        temp->next=head;
        head = temp;
        p->next = head;

    }

}


void print(node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    node* temp = head;

    while (true) {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp == head) break;
    }

    cout << endl;

}


int main()
{
    node* node1 = new node(30);
    node* node2 = new node(40);
    node* node3 = new node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node1;

    node* head = node1;
    node* tail = node3;

    insertAtFront( head ,20);

    print( head);

    return 0;
}
