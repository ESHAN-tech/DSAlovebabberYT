#include <iostream>
#include<algorithm>

using namespace std;

void print(int n){
    // base case 
    if (n  == 0){
        return;
    }
    else{
        cout<<n<<"  ";
        print(n-1);
    }
}

int main()
{
    // taking a number as input 
    int n ;
    cout<<" enter a number = ";
    cin>>n;

    //Calling the factorial function._._._
    print(n);


    return 0;
}
