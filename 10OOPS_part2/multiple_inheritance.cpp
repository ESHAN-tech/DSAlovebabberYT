#include <iostream>
#include <string>
using namespace std;

/*

MULTIPLE INHERITANCE._._._.

        [-F-]       [-M-]
          \           /
           \         /
            \       /
             \     /
             [-SON-]

*/

class father{
    int height ;
    string color;

    int getheight(){
        return height ;
    }
    string getcolor(){
        return color;
    }

    void setheight(int h){
        this->height=h;
    }
    void setcolor(string col){
        this->color=col;
    }
};

class mother{
    int weight;
    string hair;

    int getheight(){
        return weight ;
    }
    string getcolor(){
        return hair;
    }

    void setheight(int w){
        this->weight=w;
    }
    void setcolor(string ){
        this->hair=col;
    }

}

int main()
{
    
    
    system("pause");
    return 0;
}
