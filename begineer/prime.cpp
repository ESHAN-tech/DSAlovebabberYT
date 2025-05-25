#include <iostream>
using namespace std;

void checkPrime(int n){
    int count = 0;
    for(int i = 1 ; i <=n ; i++){
        if (n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<n<<" is a prime number "<<endl;
    }
    else{
        cout<<n<<" is not a prime number "<<endl;
    }
}

int main()
{
    int n;
    // taking a number as input from the user...
    cout<<"check a number is prime ? , Enter :- ";
    cin>>n;
    
    // Doing the function Call...
    checkPrime(n);
    return 0;
}
