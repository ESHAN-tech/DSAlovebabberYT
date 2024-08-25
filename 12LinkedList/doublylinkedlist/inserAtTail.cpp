#include <iostream>
#include<algorithm>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    // constructor 
    node(int d){
        this->data = d;
        this->next = nullptr;
        this->next = nullptr;
    }
};

void insertAtTail(node*& tail, int d){
    // creating a node which has to insert 
    node * temp = new node(d);
    if(tail == nullptr){
        tail = temp;
    }
    else
    {
        temp->prev=tail;
        tail->next= temp ;
        tail = temp;

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
    node* node1 = new node(31);

    node*head= node1;
    node*tail= node1;

    insertAtTail(tail,32);
    insertAtTail(tail,33);
    insertAtTail(tail,34);
    insertAtTail(tail,35);

    print(head);


    
    
    
    return 0;
}
