#include <iostream>
#include<algorithm>

using namespace std;

class hero{
    public:
    //properties
    char name[100];
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }
};
//notes:-
//if the class is empty class they reserve 1kb space...
//here we make class in another file and link that file with the help of header...
//there are three access modifier
//1.public    2.private   3.protected
int main()
{
    hero h1;
    cout<<"size : "<<sizeof(h1)<<endl;
    hero ramesh;
    ramesh.health=70;
    ramesh.level='A';

    cout<<ramesh.health<<endl;
    cout<<ramesh.level<<endl;
    cout<< "using print() function of the class = ";
    ramesh.print();
    return 0;
}
