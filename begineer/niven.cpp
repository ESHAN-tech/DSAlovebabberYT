#include <iostream>
using namespace std;
// niven :- Digit sum is a factor of that number...

void checkNiven(int n){
    int ans = n;
    int sum = 0, d;
    for(int i = 0 ; i < n ; i++){
        d= n%10;
        sum = sum + d;
        n=n/10;
    }
    if(sum == ans){
        cout<<"Number is niven number "<<endl;
    }else{
        cout<<"Number is not a niven number"<<endl;
    }

}

int main()
{
    //taking a number as input 
    int n;
    cout<<"Enter a number to check niven :-";
    cin>>n;

    //doing the function call 
    checkNiven(n);

    return 0;
}
