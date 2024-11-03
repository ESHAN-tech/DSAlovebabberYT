#include <iostream>
using namespace std;
//Making class with data and data members...
class className{
    public: 
    int data;//Data member

    void functionname(){
        //function ka body
    }

};

class car{
    private:
    int speed;

    public:
    string model;
    //constructor to initialize
    car(string m , int s){
        model = m;
        speed = s;
    }
    //public member function
    void display(){
        cout<<"Model : "<<model<<", speed: "<<speed<<"km/h"<<endl;
    }

};

int main()
{
    car car1("toyota",120);//object creation
    car1.display();

    return 0;
}
/*
CLASS:-
it's a kind of blue print or template used for creating the object 
In class data member and member function is define
access modifier by default is private , public and protected...

constructor:- 
special member function which called during the formation of object 
use:- to intialize the data member...

Destructor:-
special member function which call at the time at destroy of object 
use: free the allocated resource...

copyConstructor:-
When one object is copying from other object...
then an constructor called copy constructor 

Member Function:- 
present in class and define the behaviour of obj 
manipulate the data of the class 

Static Members:
they common for the class
means for all object there is single copy 

Common Interview Questions on Class
Q1: What is a class in C++?

A: A class in C++ is a user-defined data type that acts as a blueprint for creating objects. It encapsulates data and functions into a single unit, following OOP principles.
Q2: What is the difference between class and object?

A: A class is a blueprint or template, whereas an object is an instance of a class. Multiple objects can be created from a single class.
Q3: What are the access specifiers in C++?

A: The three access specifiers in C++ are public, private, and protected. They control the accessibility of class members.
Q4: What is a constructor? How is it different from a regular function?

A: A constructor is a special member function that is automatically called when an object is created. It is used to initialize data members. It differs from a regular function because it has no return type and is called automatically.
Q5: What is a destructor?

A: A destructor is a special member function that is automatically called when an object is destroyed. Its main purpose is to free up resources that the object may have acquired during its lifetime.
Q6: What is a copy constructor in C++?

A: A copy constructor is a constructor which initializes an object using another object of the same class. It is called when an object is passed by value.
Q7: What is the difference between a class and a structure in C++?

A: In C++, the main difference between a class and a structure is that in a class, members are private by default, whereas in a structure, members are public by default.
Q8: Explain static data members and static member functions in a class.

A: Static data members are shared across all objects of the class, meaning only one instance of the variable exists. Static member functions can only access static data members and are called using the class name.
Q9: What is function overloading in a class?

A: Function overloading is a feature in C++ where multiple functions can have the same name but different parameter types or numbers. The appropriate function is chosen at compile-time based on the argument list.
Q10: What is the use of the this pointer in a class?

A: The this pointer is an implicit parameter to all member functions. It points to the object for which the member function is called, helping access that object’s members.
Q11: Can a class have more than one constructor?

A: Yes, this is called constructor overloading. A class can have multiple constructors with different parameters.
Q12: What is the role of friend functions in C++?

A: A friend function is a function that is not a member of the class but has access to the private and protected members of the class.

*/