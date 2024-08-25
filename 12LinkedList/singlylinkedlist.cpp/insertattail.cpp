#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:

    int data;
    node *next;
    // calling the constructor 
    node(int d){
        this->data = d;
        this ->next = nullptr;
    }
};

// my try to sollve 
// void insertAtTail( node* & head ,node * &tail , int d ){
//     //create a new node which has to be insert 
//     node* p = head ;
//     node* temp = new node(d);

//     while( p != nullptr){
//         p= p->next;
//     }
//     temp->next = nullptr ;
//     temp=tail;

// }

void insertAttail( node * &tail , int d ){
    // creating the node 
    node  *temp = new node(d);

    if (tail == nullptr){
        tail = temp ;
    }
    else {
        tail->next = temp ;
        tail = temp;
    }

}

void print( node *& head ){
    node* temp = head ;
    while (temp!= nullptr){
        cout<< temp-> data<<"  "; 
        temp = temp-> next ;

    }
    cout << endl ;

}

int main()
{
    node * node1 = new node(10);

    node* head = node1 ;
    node* tail = node1;
    insertAttail(tail ,30 );
    insertAttail(tail ,40 );
    insertAttail(tail ,50 );
    insertAttail(tail ,60 );
    insertAttail(tail ,70 );
     insertAttail(tail ,80 );

    print(head );


    return 0;
}
