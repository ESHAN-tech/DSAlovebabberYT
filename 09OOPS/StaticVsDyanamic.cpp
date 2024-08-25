#include <iostream>
using namespace std;
//dealing with static and dynamic allocation._._._._
class hero{
    public:
    int health;
    char level;
};

int main()
{
    //static allocation...
    cout<<"static allocation :-"<<endl;
    hero a;
    a.health=40;
    a.level='A';
    cout<<"health is = "<<a.health<<endl;
    cout<<"level is = "<<a.level<<endl;

    //Dynamic allocation...
    cout<<"dyanamic allocation :-"<<endl;
    hero *b= new hero;
    // int *arr = new int()
    b->level='a';
    b->health=78;

    cout<<"level is = " <<b->level<<endl;
    cout<<"health is = "<<b->health<<endl;


    return 0;

}
