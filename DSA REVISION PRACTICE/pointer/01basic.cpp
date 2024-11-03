#include <iostream>
using namespace std;
void geeks()
{
    int var = 20;

    // declare pointer variable
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
int main()
{
    //syntax 
    int *ptr_demo;
    
    //using of pointer...
    int var = 10;

    int *ptr = &var; //& is unary operator :- returns address of VAR

    //unary operator (*) which returns the value of the variable located at the address specified by its operand.

    cout<<"value at ptr address = "<<*ptr<<endl;
    cout<<"Adress of &ptr pointer "<<&ptr<<endl;
    cout<<"Address of ptr = "<<ptr<<endl;
    cout<<"Address of variable = "<<&var<<endl;
    
    geeks();
    return 0;
}

/*
pointer is the symbolic representation of address 
with the help of this we can directly pass the value instead of it's copy 
(call by refrence)
helps in iteration on element...
pointer type must be same as variable data tye 
The reason we associate data type with a pointer is that it knows how many bytes the data is stored in
 When we increment a pointer, we increase the pointer by the size of the data type to which it points.
*/
