#include <iostream>
#include<algorithm>

using namespace std;
class node {
    public:
    int data;
    node* next ;
    node(int data){
        this-> data = data ;
        this-> next = nullptr;
    }
};

void deleteFrontNode( node*& head ){
    // /here we don't need to create the new temp node 
    // here we just need to remove the front node 
    if (head == nullptr){
        cout<<" your list  is empty "<< endl;
        return;
    }

    node* temp = head ;
    head= head -> next ;
    delete temp ;

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

    deleteFrontNode( head );
    print(head);

    deleteFrontNode( head );
    print(head);

    deleteFrontNode( head );
    print(head);

    deleteFrontNode( head );
    print(head);

    deleteFrontNode( head );
    print(head);


    return 0;
}
