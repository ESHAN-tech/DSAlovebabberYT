#include<iostream>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* next ;
    node( int d){
        this-> data = d ;
        this ->next = nullptr;
    }
};

void deleteBetween (node*& head , int position){
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    if (position == 1) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node*p = head;
    // node*q = p-> next;
    int count= 0;

    while( p != nullptr && count<position-1){
        p=p->next;
        count++;
    }

    node*q = p-> next;
    p->next = q->next;
    delete q;

}

void print(node*& head){
    node* temp = head ;

    while ( temp != nullptr){
        cout<< temp -> data<<"  ";
        temp= temp-> next ;
    }
    cout<< endl;
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

    cout<< "original linked-list is :- ";
    print( head);
    cout<<endl;

    cout<< "Deleting element at postion 2 :- ";
    deleteBetween (head , 2);
    print( head);
    cout<<endl;

    cout<< "Deleting element at postion 1 :- ";
    deleteBetween (head , 1);
    print( head);
    cout<<endl;

    cout<< "Deleting element at postion 1 :- ";
    deleteBetween (head , 1);
    print( head);
    cout<<endl;

    cout<< "Deleting element at postion 1 :- ";
    deleteBetween (head , 1);
    print( head);
    cout<<endl;


    return 0;

}
