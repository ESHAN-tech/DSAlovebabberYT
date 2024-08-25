#include <iostream>
using namespace std;

//static keyword creates a data member which belong to class...
// to access them don't need of object...

//staticfunction:- access only static member
//no need to create the object
//no this keyword
class satkey{
    public:
    static int timeTocomplete;
};
int satkey::timeTocomplete=5;
// int varr = satkey::timeTocomplete=5;
int main()
{
    cout<<satkey::timeTocomplete<<endl;
    
    satkey a;
    cout<<a.timeTocomplete<<endl;//no error in o/p , but this is not recommended
    return 0;
}
