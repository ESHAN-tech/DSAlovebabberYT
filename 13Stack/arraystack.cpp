#include <iostream>
using namespace std;

class stack{
    public:
    int*arr ;
    int top;
    int size;
    stack(int size ){
        this-> size = size;
        arr= new int[size];
        this->top = -1 ;
    }
    void push( int ele){

    if ( size - top > 1){
        top++;
        arr[top]= ele;
    }
    else{
        cout<<" stack is overflow "<<endl;
    }

}

    void pop(){
        if(top >= 0 ){
            top--;
        }
        else{
            cout<<"stack is underflow "<< endl;
        }
    }
    int peek(){
        if( top> 0 && top < size ){
            return arr[top];
        }
        else{
            cout<<" stack is empty ";
            return -1;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};



int main()

{
    stack student(5);

    student.push(5);
    student.push(4);
    student.push(3);
    student.push(2);
    student.push(1);

    cout<<endl;
    cout<<" before pop peek value = ";
    cout<<student.peek()<<endl;

    student.pop();
    cout<<" after 1st pop peek value = ";
    cout<<student.peek()<<endl;

    student.pop();
    cout<<" after 2nd pop peek value = ";
    cout<<student.peek()<<endl;

    student.pop();
    cout<<" after 3rd pop peek value = ";
    cout<<student.peek()<<endl;

    
    student.pop();
    cout<<" after 4th pop peek value = ";
    cout<<student.peek()<<endl;
    
    student.pop();
    cout<<" after 5th pop peek value = ";
    cout<<student.peek()<<endl;
    
    
  
    return 0;
}
