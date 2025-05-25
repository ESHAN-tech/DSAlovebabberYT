#include <iostream>
using namespace std;

void factorial(int num){
    int i = 1;
    int fact = 1;
    while(i <= num){
        cout<<fact <<" * ";
        fact = fact*i;
        i++;
    }
    cout<<endl;
    cout<<"factorial of a number = "<<fact;

}

//factorial of a number using recursion

int factorial2(int num){
    //base conditiion
    if (num == 0 ){
        return 1;
    }
    return num * factorial2(num-1);
}

int main()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    factorial(num);

    cout<<endl;

    int num2;
    cout<<"Enter a number = ";
    cin>>num2;

    cout<<"Factorial of number using recursion = "<<factorial2(num2);

    return 0;
}
