#include <iostream>
using namespace std;

void fibonacci(int num){
    int a =0 , b =1 ;
    int c =0;
    cout<<a<<" "<<b<<" ";
    for(int i=0 ; i<num ; i++){
        c = a +b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    cout<<"term of fibonacci series ? :- ";
    cin>>n;
    fibonacci(n);

    return 0;
}
