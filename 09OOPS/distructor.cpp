#include<iostream>
#include<string>
using namespace std;
//distructor:- used to deallocate the memory, no return type , free the memory ,no input parameter

class mein{
    // Creating an object of class mein
    public:
    int age;
    string name;

    // parameterized constructor _._
    mein(int ag , string naam){
        this->age=ag;
        this->name=naam;
    }
    //calling destructor_._. The ~ operator in C++ is called the tilde
    
    ~mein(){
        cout<<"destructor is called_._"<<endl;
    }

    void print(){
        cout<< "age is = "<<this->age<< endl;
        cout<<"name is = "<<this->name<< endl;
    }
};

int main()
{
    mein harsh(21 , "eshan");

    harsh.print();

    cout<<endl;

    // Creating another scope to demonstrate the destructor call
    {
        mein anotherObj(25, "Harsh");
        anotherObj.print();
    } // anotherObj goes out of scope here, and its destructor is called


    return 0;
}
