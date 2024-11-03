#include <iostream>
using namespace std;
// spy number :- 6 = 1*2*3 ,  6=1+2+3, MEANS :- Num factor Sum and Num factor prodect must equal to original number

void checkspy(int n){
    int ans = n;
    int sum = 0 ;
    int prod = 1;
    for(int i = 0 ; i < n ; i++){
        if(ans % i == 0){
            sum = sum + i ;
            prod = prod * i;
        }
    }
    if(sum == n && prod == n){
        cout<<n<<" is a spy number "<<endl;
    }else{
        cout<<n<<" is not a spy number "<<endl;
    }
}

int main()
{
    // taking a number as input 
    int n;
    cout<<" check number is spy? , Enter:- ";
    cin>>n;

    //._._function call._._.
    checkspy(n);

    return 0;
}
