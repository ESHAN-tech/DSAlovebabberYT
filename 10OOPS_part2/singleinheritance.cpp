#include <iostream>
#include<string>
using namespace std;

class dad{
    public:
    int height ;
    string color;

    void print(){
        cout<<"my Narayana dad is great "<<endl;
    }
};

class son:public dad{

};

int main()
{
    son obj1;
    obj1.print();

    return 0;
}
