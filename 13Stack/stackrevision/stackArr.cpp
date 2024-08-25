#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

class stack{
    public:
    int size;
    int top;
    int *arr;

    stack(int size){
        this->size = size;
        this->top = -1 ;
        arr = new int [size];
    }

    void push( int d ){
        if (top > size ){
            cout<<"stack is overflow :- "<<endl;
            return;
        }
        else{
            top++;
            arr[top]=d;     
        }
    }

    void pop(){
        if(top ==-1){
            cout<<" stack is underflow ";
            cout<<endl;
            return;
        }
        else{
            top--;
        }
    }

    int peekele(){
        if( top != -1 ){
            return top;
        }
        else{
            return 0;
        }
    }
};

int main() {
    stack student(5);
    student.push(5);
    student.push(6);
    student.push(7);
    student.push(8);
    student.push(9);

    cout << student.peekele() << endl;

    student.pop();
    cout << student.peekele() << endl;

    student.pop();
    cout << student.peekele() << endl;

    student.pop();
    cout << student.peekele() << endl;

    student.pop();
    cout << student.peekele() << endl;

    return 0;
}
