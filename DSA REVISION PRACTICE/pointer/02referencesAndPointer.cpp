#include <iostream>
using namespace std;

//pass-by-value...
int square1(int n)
{
    cout<<"address of n1 in square1(): "<<&n <<endl;
    n*=n;
    return n;
}
//pass-by-Reference with pointer Argument...
void square2(int *n){
    cout<<"Address of n2 in square2(): "<<n<<endl;
    *n *= *n;

}
//pass-by-Reference with Reference Argument...
void square3(int& n ){
    cout<<"address of n2 in square3(): "<<&n<<endl;
    n *= n;
}

int main()
{
   
    int n1 = 8;
    int n2 = 9;
    int n3 = 10;

    //call-by-value...
    cout<<"Square of n1 ="<<square1(n1)<<endl;
    
    //call-by-refrence with pointer Arguments... 
    square2( &n2);
    cout<<"Square of n2 = "<<n2<<endl;
    
    //call-by-refrence with refrence arguments...
    square3(n3);
    cout<<"Square of n3 = "<<n3<<endl;

    return 0;
}
/*
There are 3 ways to pass C++ arguments to a function:

Call-By-Value:-(yaha value ki copy use ki )
     jab hum function ko koi argument pass karte hain, toh uski copy pass hoti hai.

Call-By-Reference with a Pointer Argument:-(yaha same memory use hui)
    pointer ke through original variable ka address pass karte hain.
    direct memory location ko access karta hai
    agar value change hoti hai, toh original variable bhi change hota hai.

Call-By-Reference with a Reference Argument:-(yaha as it is wahi variable use hua)
    hum function ko directly reference pass karte hain
    function original value ko hi access karta hai aur koi copy create nahi hoti.
*/