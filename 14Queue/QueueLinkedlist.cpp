#include<iostream>
#include<algorithm>
using namespace std;


class node{
public:
    int data;
    node* next ;
    // constructor called...
    node(int d){
        this->data = d;
        this->next = nullptr;
    }
};

class queue{
public:
    node* rear;
    node* front;

    // call constructor
    queue(){
        rear = nullptr;
        front= nullptr;
    }
    // push operation / insertion operation of LinkedList 
      void push(int d)
    {
        // as it is dynamic, no overflow condition occurs
        node* temp = new node(d);
        if (rear == nullptr) {
            front = rear = temp;
            return;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    //here we perform the deletion operation...
    void pop() {
        if (front == nullptr) {
            cout << "Queue is empty..." << endl;
            return;
        } else {
            node* temp = front;
            front = front->next;
            delete temp;
            if (front == nullptr) {
                rear = nullptr;
            }
        }
    }

   

    void print()
    {
        if(front == nullptr){
            cout<<"Queue is empty "<<endl;
            return;
        }

        node* temp = front;

        while ( temp != nullptr ){
            cout<<temp->data<<" ";
            temp= temp->next;
            
        }cout<<endl;
    }
};

int main()
{
    queue Qbay;

    Qbay.push(5);
    Qbay.push(4);
    Qbay.push(3);
    Qbay.push(2);
    Qbay.push(1);
    Qbay.push(0);

    Qbay.print();

    
    
    return 0;
}
