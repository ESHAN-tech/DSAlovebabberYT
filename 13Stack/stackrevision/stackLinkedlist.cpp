#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};

class Stack{
public:
    node* head;

    // constructor called 
    Stack()
    {
        head = nullptr;
    }

    // write insert at front w
    void push(int d){
        //creating node first 
        node * temp = new node(d);
        temp->next = head;
        head = temp;   
    }
    // here we use deletion logic 
    void pop(){
        if(head!= nullptr)
        {
        node* temp = head;
        head = head->next;
        delete temp;
        }
        else
        {
            cout << "Stack is empty, cannot pop." << endl;
        }
    }
    //print function of linkedlist._._.
    void print(){
        node* temp = head;
        while(temp!= nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
};

int main()
{
    // node* node1 = new node(5);
    // node*head = node1;
    Stack SL;

    SL.push(5);
    SL.push(4);
    SL.push(3);
    SL.push(2);
    SL.push(1);

    SL.print();

    
    return 0;
}
