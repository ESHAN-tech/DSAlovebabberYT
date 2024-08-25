#include<iostream>
#include<algorithm>
using namespace std;

class node{
public:
    int data;
    node* next = nullptr;

    node(int d ){
        this -> data = d;
        this -> next = nullptr;
    }

};

void insertBetween(node*& head , int d , int position ){
    // creating a node which has to be insert 
    node* temp = new node(d);

    // logic to inset the node
    node* p = head ;
    node* q = head ;
    int count = 1 ;

    // while (true){
    //     p = p -> next ;
    //     if ( p == head ) break;
    // }
    
    while (true){
        p = p -> next ;
        if ( p == head ) break;
    }

    while (q != head &&  count< position- 1){
        q = q-> next ;
        count++;
    }

    temp->next = q -> next ;
    q-> next = temp ;
}

void print (node*& head){
    node* temp = head ;

    while ( true){
        cout<< temp-> data <<" ";
        temp= temp-> next ;
        if ( temp == head ) break;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);
    node* node2 = new node(20);
    node* node3 = new node(30);

    node1 -> next = node2;
    node2 -> next = node3 ;
    node3 -> next = node1 ;


    node* head = node1 ;
    node* tail = node3 ;

    insertBetween(head , 59 , 4 );
    print (head);

    return 0;
}

    // if(position== 1){
    //     temp->next = head ;
    //     if(head != nullptr){
            
    //     }
    //     head = temp ;
    //     return;
    // }
    // this incoorect code do it again 
