#include <iostream>
using namespace std;


void numDigitProduct(int N){
    int ans = 1;
    while( N>0){
    int d = N % 10 ;
    N = N/10;
    ans = ans * d;
    }
    cout<<" answer = "<<ans;
    cout<<endl;
    
}

int main()
{
    int n =5244;

    numDigitProduct(n);

    
   
    return 0;
}
/*

Problem Description

A supermarket maintains a pricing format for all its products. A value N is printed on each product. When the scanner reads the value N on the item, the product of all the digits in the value N is the price of the item. The task here is to design the software such that given the code of any item N the product (multiplication) of all the digits of value should be computed(price).

Input 5244

Output 160

Explanation

From the input above Product of the digits 5,2,4,4 5*2*4*4=160

Hence, output is 160

*/
