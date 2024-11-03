#include<iostream>
using namespace std;

class node {
    public:
    int data;//  it is the data of the node 
    node* next ; // it is the pointer of the node 

    // assign them a value by a constructor 
    // calling the constructor 
    node(int d){
        this->data =d;
        this->next=NULL;//intial node is created having a value null 
    }
};

// insert case 1 : insert at the front 

void insertatthefront(nosde* &head , int d )
{
    //first create a node which has to be insert 
    //we have to create  a node in am dynamic order 

    node* temp  = new node(d);
    temp-> next = head ;
    head =  temp ;
}

void insertatTail(node* &tail , int d ){
    //creating a new node first 
    node* temp = new node (d);

    // chexkig weather the thier is node present or not 
    if (&head==NULL)
    {
        head == tail ;
    }
    else
    {
        head->next = tail
        tail-> next = NULL ;
    }
}
void insertinbetween( node* & head , int  d , int index ){
    // creating a node which has to be insert 
    node* temp = new node (d );

    node* p ;//its a point one 
    node* q ;//its a pointer two

    for (int i= 0 ; i < index-1 && p!=NULL ; i++){
        p=p->next;
    }

    if (p == NULL)
    {
        return;
    }
     temp->next=p->next ;
     p->next=temp;  

}


// case 1st :- inserting a node starting index 

void insertatstarting ( node* &head ,int d ){
    // creating a node 
    node* temp = new node(d);

    if(head = NULL ){
        return ;
    }
    else{
        head->next = temp;
        temp->next = NULL;
    }
}

void insertatlast(node* &tail ,int d ){
    //creating a new node firstly 
    node* temp = new node(d);
    // now check weather the list is empty or not 
    if( &head == NULL){
        head = tail;
        return;
    }
    else{
        tail->next=temp ;
        temp-> next = NULL ;    
    }
}

// case 3rd :-  insert a node in bwt the list 

void insertmiddlenode(node* &head , int d , int index ){
    //creating a node 
    node* temp = new node(d);

    node* p ;

    for(int i = 0 ;  i < index ; i ++ ){
        p = p->next ;
    }
    temp ->next = p->next ;
    p->next = temp ;

}
void print (node* &head )
{
    node* hipo = head ;

    while (hipo ! = NULL){
        cout << hipo->data<<" ";
        hipo = hipo-> next;
    }
    cout << endl ; 
}

int main(){
    node* hero = new node (10);
    // here default constructor is called 

    cout<< hero->data <<endl;
    cout<< hero -> next << endl ;

    // head pointer 
    node* head = hero ;
    node tail = hero ;


    return 0 ;



  

}