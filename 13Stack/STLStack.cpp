//stack implementation using STL

#include <iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<int> hero;

    // push operation 
    hero.push(5);
    hero.push(6);
    hero.push(7);
    hero.push(8);
    cout<<" ( + ) Top element before pop operatio in stack = ";
    cout<<hero.top()<<endl;
    cout<< " ( + ) Element in the stack after the push operation = ";
    while(!hero.empty())
    {
        cout<<hero.top()<<" ";
        hero.pop();
    }

    cout<<endl;
    
// now the stack is get empty due to use of pop operation while printing
// the stack element 
    hero.push(5);
    hero.push(6);
    cout<< " ( + ) Top element of the stack =";
    cout<<hero.top()<< endl;
    cout<< " ( + ) Size of the stack = ";
    cout<< hero.size()<<endl;
    return 0;

}
