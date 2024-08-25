#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;   
    cout<<"capacity of vector = "<<v.capacity() << endl;
    cout<<"size of vector = "<<v.size()<<endl;

    v.push_back(1);
    cout<<"capacity of vector = "<< v.capacity() << endl;
    cout<<"size of vector = "<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity of vector = "<< v.capacity() << endl;
    cout<<"size of vector = "<<v.size()<<endl;
    

    v.push_back(3);
    cout<<"capacity of vector = "<< v.capacity() << endl;
    cout<<"size of vector = "<<v.size()<<endl;

    return 0;
    
}
