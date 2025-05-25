#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    cout<<"your input digit is this :- "<<n<<"   ";
    //logic_for_reversing_a_number
    int rev=0;
    while( n > 0){
        int d = n%10;
        rev = rev*10+d;
        n=n/10;
    }

    cout<<"Reverse of your digit is = "<<rev;
    return 0;
}
/*
DRY RUN 

digit = 543
543 % 10 = 3
rev = 0 * 10 + 3 
n = n / 10      (54)

digit = 54
543 % 10 = 4
rev = 3* 10 + 4
n = n / 10      (5)

digit = 5
543 % 10 = 5
rev = 34 * 10 + 5 
n = n / 10      (0)   


Chaaho toh ab isme aur bhi improvements kar sakte ho jaise:

Negative numbers ke liye handle karna

Leading zeroes ka case

Function bana ke modular banana

*/