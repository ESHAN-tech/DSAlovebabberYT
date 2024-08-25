#include<iostream>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // calling the constructor 
    node(int d ){
        this -> data = d;
        this -> next = nullptr;
    }
};

void insertAtTail (node*& tail , node*& head , int d){
    // creating a node first which has to be insert 
    node* temp = new node(d);

    // logic for insert at tail 
    if ( tail == nullptr){
        tail = temp ;
    }
    else {
        tail->next = temp ;
        tail = temp ;
        temp -> next = head ;
    }
}

// making a function off print 

void print (node*& head )
{
    node* temp = head;

    while(true){
        cout<<temp->data<<"  ";
        temp = temp-> next ;
        if( temp == head ) break;

    }

    cout<<endl;
    
}

// void print(node* head) {
//     if (head == nullptr) {
//         cout << "The list is empty." << endl;
//         return;
//     }
//     node* temp = head;

//     while (true) {
//         cout << temp->data << " ";
//         temp = temp->next;
//         if (temp == head) break;
//     }

//     cout << endl;

// }

int main()
{
    node* node1 = new node(100);

    node* head = node1;

    node* tail = node1;
    insertAtTail ( tail , head , 200);
    insertAtTail ( tail , head , 300);
    insertAtTail ( tail , head , 400);

    print (head);



    
    return 0;
}
