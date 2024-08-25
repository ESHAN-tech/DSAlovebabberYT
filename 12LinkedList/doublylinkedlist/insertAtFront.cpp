#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        this->data = d;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertAtFront(node*& head , int d){
    // creating a node which has to be insert 
    node* temp = new node(d);
    if(head == nullptr){
        head = temp;
    } 
    else{
        temp->next = head ;
        head->prev= temp;
        //temp->prev= nullptr;
        head = temp;
    }
}

void print(node*& head){
    node* temp = head ;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(40);

    node* head = node1;
    node* tail = node1;

    insertAtFront(head , 50);
    insertAtFront(head , 60);
    insertAtFront(head , 70);
    insertAtFront(head , 80);
    insertAtFront(head , 90);

    print(head);

     return 0;
}
