#include <iostream>
using namespace std;

void reverse(int n){
    int ans = n;
    int rev = 0;
    while(n > 0){
    int d = n%10;
    rev = rev*10 + d ;
    n = n/10;
    }
    cout<<"original number is "<< ans <<endl;
    cout<<"Reverse number is "<< rev <<endl;

}
//factorial using recursion 
int factorial(int n){
    //base condition
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

//factorial using loop
int fact (int n){
    int fact = 1;
    for(int i = 1 ; i <=n ; i++){
        fact = fact * i;
    }
    return fact;
}

//fibonacci using recursion 
int fibonacci(int n){
    //base condtion 
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

//fibonacci using loop 
void fibo(int n){
    int a = 1;
    int b = 1;
    int sum = 0;
    cout<<a<<" "<<b<<" ";
    for(int i = 0 ; i < n ; i++ ){
        sum = a + b;
        cout<<sum<<" ";
         a = b;
         b = sum;
    }
}

//perfectSquare
int perfectSquareRoot(int n){
    int ans = 0;
    for(int i =0 ; i*i <= n ; i++){

        if(i*i == n) return i;
        else if (i*i < n )ans = i;
        else
         break; 
    }
    return ans;
}

int main()
{
   /* int n;
    cout<<"ENTER A NUMBER TO REVERSE = ";
    cin>>n;

    reverse(n);
    cout<<endl;

    int n2;
    cout<<"Enter a number for factorial = ";
    cin>>n2;

    cout<<"Factorial using recursion = "<<factorial(n2);
    cout<<endl;
    cout<<"Factorial using recursion = "<<fact(n2);
    cout<<endl;

    int n3;
    cout<<"Enter a number of term for fibonacci = ";
    cin>>n3;

    for(int i = 0 ; i < n3; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    fibo(n3);
*/
    int n4;
    cout<<"Enter a number for the square root = ";
    cin>>n4;

    cout<<"Square root = "<<perfectSquareRoot(n4);

    return 0;
}
