#include <iostream>
#include<algorithm>
using namespace std;

class Queue
{
    public:
    int size;
    int rear;// used for the push                   
    int front;// used for pop
    int *arr;
//queue constructor called  
    Queue(int s){

        this -> size =  s;
        rear = 0;
        front= 0;
        arr = new int[size];

    }

//for the push operation we use 
    void push(int d){
        if( rear == size){
            cout << " queue is overflow "<< endl;
        }
        else{
            arr[rear]= d;
            rear++;
        }
 
    }
// for pop operation 
    void pop()
    {
       if(front == rear){
        cout<<" queue id empty = "<<endl;
        front= 0;
        rear = 0;
       }
      else {
            cout << "Popped element: " << arr[front] << endl;
            arr[front] = -1; // here -1 represents the empty location
            front++;
            if (front == rear) 
            {
                front = 0;
                rear = 0; // Resetting the queue after all elements are popped
            }
        }
    }
    void print(){
        if(front == rear ){
            cout<< "queue is empty "<<endl;
        }
        else{
            cout<< "printing queue element "<<endl;
            for(int i = front ; i < rear ; i++){
                cout<< arr[i]<<"  ";
            }
        }
    }
};

int main()
{

    Queue hipo(5);
    hipo.push(5);
    hipo.push(4);
    hipo.push(3);
    hipo.push(2);
    hipo.push(1);

    hipo.print();

    cout<<endl;
    cout<<endl;
    cout<<"pop 1st"<<endl;
    hipo.pop();
    hipo.print();

    cout<<endl;
    cout<<endl;
    cout<<"pop 2nd"<<endl;
    hipo.pop();
    hipo.print();

    cout<<endl;
    cout<<endl;
    cout<<"pop 3rd"<<endl;
    hipo.pop();
    hipo.print();

    cout<<endl;
    cout<<endl;
    cout<<"pop 4th"<<endl;
    hipo.pop();
    hipo.print();

    cout<<endl;
    cout<<endl;
    cout<<"pop 4th"<<endl;
    hipo.pop();
    hipo.print();



}