#include <iostream>
using namespace std;

class ClassName{
    public:
    int data; //Data member 
    //member function
    void display(){
        cout<<"Data: "<<data<<endl;
    }
};

class student {
    public:
    int age;

    //member function 
    void setDetail(string n , int a){
        this->name = n; 
        this->age = a;

    }
    //member function to display the detail
    void displayDetails(){
        cout<<"Name: "<<name<<" ,Age: "<<age<<endl;  
    }
};

int main()
{
    ClassName obj1; // object creation 
    obj1.data=10;
    obj1.display();

    student stu1 , stu2;

    stu1.setDetail("Eshan" , 22);
    stu2.setDetail("Aditya", 21);

    return 0;

}
/*
Object :- 
Instance of the class(blue print) 
method define by the class 
create it multiple times in a object 

Common Interview Questions on Objects in C++
Q1: What is an object in C++?

A: An object is an instance of a class. It is a real-world entity that has attributes (data members) and behaviors (member functions) defined by the class.
Q2: How is an object different from a class?

A: A class is a blueprint or template, while an object is an instance of that class. Multiple objects can be created from a class, each having its own set of data, but all follow the structure defined by the class.
Q3: How is memory allocated to an object in C++?

A: Memory is allocated to an object when it is created. Each object gets its own separate copy of the data members defined by the class, but all objects share the member functions.
Q4: How can we access class members using an object?

A: We can access class members using the dot (.) operator. For example, if obj1 is an object of the class ClassName, we can access its members like obj1.data and call functions like obj1.display().
Q5: Can you create multiple objects from a class? Give an example.

A: Yes, multiple objects can be created from a class. Each object will have its own separate copy of data members. For example:
cpp
Copy code
Car car1, car2;
car1.brand = "BMW";
car2.brand = "Audi";
Q6: What is the difference between an object and an instance?

A: There is no significant difference. An object is referred to as an instance of a class. Both terms can be used interchangeably.
Q7: Can objects be passed as arguments to functions?

A: Yes, objects can be passed as arguments to functions. Objects can be passed by value or by reference, depending on the requirement.
Q8: What is object slicing in C++?

A: Object slicing occurs when an object of a derived class is assigned to an object of the base class. In this process, the extra information of the derived class is "sliced off," and only the base class part of the object is copied.
Q9: What is the size of an object in C++?

A: The size of an object depends on the size of its data members. Member functions do not contribute to the size of the object, as all objects share the same set of member functions.
Q10: How can you dynamically allocate memory for an object in C++?

A: Dynamic memory for an object can be allocated using the new operator. For example:
cpp
Copy code
Car* car1 = new Car();
car1->brand = "Tesla";

*/
