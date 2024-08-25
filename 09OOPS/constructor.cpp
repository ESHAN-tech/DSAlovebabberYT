#include <iostream>
#include <string>
using namespace std;
//parameterized constructor...
//key constructor...
//copy constructor...

class harsh{
    int age;
    char grade;

    harsh(int a , char grade){
        this->age=a;
        this->grade=grade;
    }
    void print(){
        cout<<age<<endl;
        cout<<grade<<endl;
    }
};
// NOTE :- if constructor writen by the user then default constructor 
// will not be exist ........
int main()
{
    hero temp(22 ,'B');
    temp.print();

    return 0;
}
