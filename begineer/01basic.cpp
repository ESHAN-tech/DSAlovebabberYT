#include <iostream>
using namespace std;

int main() {
    //# LITERAL._._
    // Integer Literals
    int decimal = 10;        // Decimal literal
    int octal = 012;         // Octal literal
    int hex = 0xA;           // Hexadecimal literal

    // Floating-Point Literals
    float f = 3.14f;         // Float literal
    double d = 2.71828;      // Double literal
    long double ld = 3.1415L;// Long double literal

    // Character Literals
    char ch = 'A';           // Character literal
    char newline = '\n';     // Escape sequence for newline OR we can use endl

    // String Literals
    string str = "Hello, World!"; // String literal

    // Boolean Literals
    bool flag = true;        // Boolean literal

    // Pointer Literal
    int* ptr = nullptr;      // Pointer literal

    // Output the literals
    cout << "Integer Literals: " << decimal << ", " << octal << ", " << hex << endl;
    cout << "Floating-Point Literals: " << f << ", " << d << ", " << ld << endl;
    cout << "Character Literal: " << ch << newline;
    cout << "String Literal: " << str << endl;
    cout << "Boolean Literal: " << flag << endl;
    cout << "Pointer Literal: " << ptr << endl;

    return 0;
}
/*
Notes :- 
computer language:- communicating with the computer 
type:-

Low Level Language:-
1)Machine language
2)assembly Lnaguage

High Level Language:-
1)procedure language:- top to bottom , functions 
2)object oriented :- bottom to top , object 

Tokens :-
1)keyword
2)identifier :- variable , litral , function , class , package
3)litral
4)operator 
5)punctuator/spectator

Litrals 
1)integer litral :- Decimal , octal , Hexadecimal 
1.2)Floating-Point Literals:=2.0e4,3.14f
2)charater litral :-'a' , 'A' etc 
3)String Literals:
4)boolean literal:true , false 
5)Null literal :-
6)Pointer Literals:


Data type :- 
1)primitive/predefine/basic / fundamental :-
2)Non primitive datatype:- Userdefine data type , abstract , composite ...  i.e :- class , struct , union

*/
