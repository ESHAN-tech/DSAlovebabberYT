#include <iostream>
using namespace std;

class hero {
private:
    int health;

public:
    char level;
    //simple constructor._._._
    hero() {
        cout << "Simple constructor is called\n _._"<<endl;
        this->health = 70;
        this->level = 'x';

    }

    // Parameterized constructor
    hero(int h, char lev) {
        cout<<"Parameterized constructor_._"<<endl;
        this->health = h;
        this->level = lev;
    }

    //copy constructor
    hero(const hero &temp){
        cout<<"copy constructor is called_._ "<<endl;
        this->health = temp.health;
        this->level = temp.level;     
    }
    void print()
    {
        cout << "Health = " << this->health << endl;
        cout << "Level = " << this->level << endl;
    }
    void sethealth(int h) {
        health = h;
    }
    int gethealth() {
        return health;
    }   
};

int main() {

    cout<<"Parameterized constructor_._"<<endl;

    hero harsh(5, 'a');
    harsh.print();
    cout << endl;

    cout<<"Simple constructor_._"<<endl;

    hero anotherHarsh;
    anotherHarsh.print();
    cout << endl;

    cout<<"using getter and setter_._"<<endl;

    harsh.sethealth(10); // Setting health to 10
    cout << "Health = " << harsh.gethealth() << endl;
    cout << endl;

    cout<<"copy constructor_._"<<endl;

    hero eshan(harsh);
    eshan.print();
    cout << endl;
    return 0;
}
