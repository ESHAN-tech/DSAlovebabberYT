#include<iostream>
#include<algorithm>
using namespace std;
// here in the pass by value the copy of the variable is given 
void reverseanum (int n ){// here the copy value of n is pased
    int rev = 0 ;
    while(n > 10){
        int d = n % 10;
        rev = rev *10+d;
        n = n /10;
    }
    //return rev
}

void update(int &n){
    n++;
}

int main()
{
    int n;
    cout<<" Enter the value for reverse = ";
    cin>>n;

    cout<<" value of 'n' befor = "<<n<<endl;
    reverseanum ( n );
    cout<<" value of 'n' after = "<<n<<endl;

    // pass by refrence._._.
    int a =7 ;
    cout<<" value of a before = "<<a<<endl;
    update( a);
    cout<<"value of a after = "<<a<<endl;


    return 0;
}


