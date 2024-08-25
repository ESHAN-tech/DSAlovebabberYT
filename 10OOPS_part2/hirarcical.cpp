#include <iostream>
#include<algorithm>
using namespace std;

class A {
    public:
    int length;

    void print1(){
        cout<<"_hari_he_satya_hai_"<<endl;
    }

};

class B : public A{
    void print2(){
        cout<<"_baki_sab_bas_maya_hai_"<<endl;
    }

};
class C : public A{
    void print3(){
        cout<<"_we_were_just_a_son_of_hari_"<<endl;
    }

};

int main()
{
    A manav;
    B bhakt;
    C sanyashi;

    sanyashi.print1();
    
    bhakt.print2();


    return 0;
}

