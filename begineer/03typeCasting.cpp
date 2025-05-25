#include <iostream>
using namespace std;
// 1) Type Casting Operator :- Used to convert one data type to another 
int main()
{    
    //Implicit Type Casting 
    int a = 10;
    double b=a;
    cout<<"Implicit type-Casting :"<<b<<endl;

    //Explicit type Casting using C-style cast
    double x = 9.81;
    int y = (int)x;
    cout<<"Explicit type-Casting : "<<y<<endl;

    //staticCast
    double num =5.75;
    int intNum = static_cast<int>(num);
    cout << "Using static_cast: " << intNum << endl; 

    return 0;
}
