#include <iostream>
using namespace std;
// checking weather the number is perfect or not 
// perfect :- [6 = 1+2+3] , means to factor sum of the given number 

void checkPerfect(int n){
    int ans = n;
    int sum = 0 ;
    for(int i = 0  ; i < n ; i++){
        if(n % i == 0){
            sum += i ;
        }
    }
    // cout <<"Checking the Sum : - "<<sum<<endl ;

    if(ans == sum){
        cout<<ans<<" is perfect Number "<<endl;
    }
    else{
        cout<<ans<<" is not a perfect Number"<<endl;
    }
}

int main()
{
    // taking a number input from the user 
    int n;
    cout<<" check weather the number is perfect ? , Enter here :- ";
    cin>>n;

    // doing the Function Call ....
    checkPerfect(n);
  
    return 0;
}
