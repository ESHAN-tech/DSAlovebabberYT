#include <iostream>
using namespace std;

void bitwize(int a , int b){
    //  5 In binary: 0101 (this operator deal with bits that's why i think so it called as bitwize)
    //  9 In binary: 1001
    cout<< "a&b  = "<<(a & b)<<endl; //bitwize and 
    cout<< "a|b  = "<<(a | b)<<endl;
    cout<< "a^b  = "<<(a^b)<<endl;
    cout<< "~a  = "<<(~a)<<endl;
    // Left Shift (<<)
    cout << "a << 1 = " << (a << 1) << endl;  // Output: 10 (Shifts bits of 5 left by 1 position)

    // Right Shift (>>)
    cout << "b >> 1 = " << (b >> 1) << endl;  // Output: 4 (Shifts bits of 9 right by 1 position)
}

void assignmentOerator(int a , int b){
    // <<=	Left shift and assign	a <<= 2
    // >>=	Right shift and assign	a >>= 2
    cout << "Before left shift: a = " << a << endl;  // Output: 5
    a <<= 2;  // Shifts a to the left by 2 positions, equivalent to a = a * 2^2
    cout << "After left shift (a <<= 2): a = " << a << endl;  // Output: 20 (In binary: 10100)

    // Right shift and assign (>>=)
    cout << "Before right shift: b = " << b << endl;  // Output: 16
    b >>= 2;  // Shifts b to the right by 2 positions, equivalent to b = b / 2^2
    cout << "After right shift (b >>= 2): b = " << b << endl;  // Output: 4 (In binary: 100)
}
int main()
{
    //bitwize operator & , ^ , ~ , << , >>
   cout<<"._.here i called bitwise._."<<endl;
   bitwize(5, 9);
   cout<<endl;
   assignmentOerator(5, 16);
   // there is one operator use over there called as comma operator (,) . . . 
   

    return 0;
}
/*

++ :- increment operator 
type :- 
pre , post
-- :- decrement operator
type :-
pre , post 

Pointer operator:-
*
&

*/
