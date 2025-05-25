#include <iostream>
using namespace std;

void checkPrime(int n){
    int ans = n;
    int counter = 0;
    for(int i = 1 ; i <=n ; i++){
        if(n % i == 0){
            counter++;
        }
    }
    if(counter == 2){
        cout<< ans << " is prime number ";
    }
    else{
        cout<< ans << " is not a prime number ";
    }
}

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    checkPrime(n);

    return 0;
}
