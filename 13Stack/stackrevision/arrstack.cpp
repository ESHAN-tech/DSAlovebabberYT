#include<iostream>
#include<algorithm>
using namespace std;

class stack{
    public:
    int top ;
    int size; 
    int *arr;
    //constructor called 
    stack(int size)
    {
        this->size=size;
        this->top=-1;
        arr=new int[size];
    }
    void push(int d){
        //checking the._._.
        if(size-top>0)
        {
            cout<<"stack is overflow"<<endl;
        }
        else
        {
            arr[top] = d;
            top++;
        }
    }
    
    void pop(){
        //underflow condition
        if(top >=size){
            cout<<"stack is overflow "<<endl 
        }
        else{
            top--;
        }

    }
};


int main()
{
    
    
    system("pause");
    return 0;
}
