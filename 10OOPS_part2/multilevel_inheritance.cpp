#include <iostream>
using namespace std;
/*
MULTILEVEL INHERITANCE._._.

        [---]
          |
        [---]
          |
        [---]
        
*/
class animal{
    public:
    void print(){
        cout<<"._.animal can't speak._."<<endl;
    }
};

class dog:public animal{
    public:
    void print2(){
        cout<<"._.Dog can bark but can't  speak._."<<endl;
    }
};
// class dog:public pitbull{} this can't be possible 

class pitbull:public dog{
    public:
    void display(){
        cout<<"._.have a strong byte._."<<endl;
    }
};

int main()
{
    //this class can access only animal and itself
    dog d1;
    d1.print();
    d1.print2();
    
    // it can 
    pitbull p1;
    p1.print();
    p1.print2();
    p1.display();
    


    return 0;
}
