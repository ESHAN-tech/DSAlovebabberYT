#include <iostream>

using namespace std;
// this struct node just create the node before that there is an null node
class node {
    public:
    int data; // data value of the node 
    node * next ;// this pointer store the address of the next node
    // calling the constructor 
    node(int d){// this is parameterized constructor
        this->data = d;
        this->next = nullptr;
    }
};

void print(node * & head){
    node * temp= head;
    while(temp!= nullptr){
        cout<< temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = new node(10);
    head->next = new node (30);
    head->next->next = new node (40);

    print (head);

    

    return 0;
}
