#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;
    void print() {
        cout << level << endl;
    }

    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }
};
//they are getter and setter used to access the private class data
//getter is used for the fetching the data 
//setter is used for the seting the value 

int main() {
    Hero harsh;
   
    harsh.setHealth(45);
    cout << harsh.getHealth();
    cout << endl;

    harsh.setLevel('b');
    cout << harsh.getLevel();
    cout << endl;

    return 0;
}
