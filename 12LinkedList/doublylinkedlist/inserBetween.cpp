#include <iostream>
#include<algorithm>
using namespace std;

class node
{
    public:
    int data ;
    node * next;
    node* prev;

    node(int d){
        this->data = d;
        this->next= nullptr;
        this->prev= nullptr;
    }
};

void insertBetween(node*& head , int d , int pos ){
    // creating a node for inserting 
    node* temp = new node(d);
    //inserstion at head 
    if(pos == 1){
        temp->next = head ;
        if(head != nullptr){
            head ->prev = temp;
        }
        head = temp ;
        return;
    }

    // inserting operation
    node* p = head ;
    int count = 1 ;
    
    while (p!= nullptr && count < pos - 1){
        p=p->next ;
        count ++;
    }

    temp->next = p->next ;
    //temp->prev = p;
    p->next=temp;
    temp->prev = p;

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
    node* node1 = new node(30);
    node* node2 = new node(45);
    node* node3 = new node(60);

    node1->next = node2;
    node2->prev = node1;

    node2->next = node3;
    node3->prev = node2;

    node* head = node1;
    node* tail = node3;

    insertBetween(head , 500 , 1 );
    print(head);




    return 0;
}
