#include <iostream>
#include<algorithm>

using namespace std;

// This node structure is for the singly linked list_._._.
class node{
public:
    int data;
    node *next;
    node(int d ){
        this->data = d;
        this->next = nullptr ;

    }
};

// INSERT IN FRONT 
void InsertAtFront(node *&head , int d)
{
    // create a node in a dynamic oder which has to be insert._._._
    node * temp = new node(d);
    if (head == nullptr)
    {
        head = temp;
        return;
    }
    else
    {
        temp->next = head;
        head =temp;
    }
}

void print(node *& head){
    node* temp = head;
    while (temp != nullptr){

        cout<<temp->data<<" ";

        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node *hero;
    InsertAtFront( hero , 30 );
    InsertAtFront( hero , 40 );
    InsertAtFront( hero , 50 );

    print(hero);

    return 0;
}
