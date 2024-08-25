#include <iostream>
#include<algorithm>
using namespace std;
// RECURSION  DAY 1 

/*
recursion means when function it's self is called recursion 
i work similar like a loop , here in function
we put the base value first after that we do a function call 

._._.STRUCTURE OF THE RECURSION._._.

        //base case
        //processing 
        //recursive call

*/

// finding the factorial using the recursion 

int factorial(int n){
    // base condition._._
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main()
{
    // function call of factorial; . . .

    int n;
    cout <<" enter a number for the factorial = ";
    cin>>n;

    cout <<" factorial of the given number is = ";
    cout<<factorial(n);


    return 0;
}
