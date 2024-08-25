#include<iostream>
using namespace std;
class node
{
    public:
    int data ;
    node* next;

    node(int d){
        this->data=d;
        this->next=nullptr;
    }
};

void deletebetween (node*& head , int pos){
    node*temp = head ;
    int count=0;

    while (temp!=nullptr && count < pos-1 ){
        temp= temp->next;
        count++;
    }
    node* p = temp->next->next;
    temp->next = p-> next ;
    delete p;
}

int main()
{
    
    node* node1 = new node(10);
    node* node2 = new node(20);
    node* node3 = new node(30);
    node* node4 = new node(40);

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
   
    node* head = node1;
    node* tail = node2;
    
    return 0;
}
