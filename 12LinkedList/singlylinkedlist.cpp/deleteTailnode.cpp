#include<iostream>
#include<algorithm>
using namespace std;
class node {
    public:
    int data;
    node* next ;

    node(int d){
        this->data = d ;
        this->next = nullptr;
    }
};

// first we have to reach at the last node whose next is null 
void deleteTail(node*& head ){

    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }
    
    node* p = head;
    while ( p ->next->next != nullptr){
        p=p->next;
    }
    node* temp = p->next;
    p->next = nullptr;
    delete temp;
    
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

    node1-> next = node2;
    node2-> next = node3;
    node3-> next = node4;
   
    node* head = node1;
    node* tail = node2;

    cout<<"original linked list is = ";
    
    print(head);

    deleteTail( head );
    print(head);

    deleteTail( head );
    print(head);

    deleteTail( head );
    print(head);

    deleteTail( head );
    print(head);

    deleteTail( head );
    print(head);

    

    return 0;
}
