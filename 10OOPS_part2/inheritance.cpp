#include <iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;

    void setheight(int h){
        this->height=h;
    }
    void setweight(int w){
        this->weight=w;
    }
    void setage(int a){
        this->age=a;
    }

    int getheight(){
        return height;
    }

    int getweight(){
        return weight;
        
    }

    int getage(){
        return age;
        
    }
    void print(){
        cout<<this->height<<endl;
        cout<<this->weight<<endl;
        cout<<this->age<<endl;
    }
     
     
};

class male:public human{
    public:
    string color;

    void sleep(){
        cout<<"male voice is deeper"<<endl;
    }
};

int main()
{
    human obj2;
    obj2.age=17;
    obj2.height=177;
    obj2.weight=77;

    male obj1;
    cout<<"here garbage value comes = ";
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    
    //here obj1 can access the data of obj2 due to inheritance._._._
    obj1.setage(5);
    obj1.setheight(177);
    obj1.setweight(55);

    
    obj1.print();

    return 0;
}
