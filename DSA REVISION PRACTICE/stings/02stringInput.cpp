#include <iostream>
#include <sstream>
#include<string>
 
using namespace std;

int main()
{
    // Learn to taking string as a input...
    //used to take a string dynamic...

    // 1. Using Cin
    string S ;
    cout<<"Enter the string-1. = ";
    cin>>S;

    cout<<"String-1 is :"<<S<<endl;

    //Def:- Using getline() function in cpp 
    /*
    The getline() function in C++ is used to 
    read a string from an input stream.
    It is declared in the <string> header file.
    */ 

    // 2. Using getline 

    string Str2;
    cout <<"Enter another string-2. = "<<endl;
    //Now getline will used ...
    getline(cin , Str2);
    cout<<"String-2 is : "<<Str2<<endl; 

    // 3. Using stringstream (#include <sstream>)
    // The stringstream class in C++ is used to take multiple strings as input at once.

    string Str3="hello i am eshan";// Ye ek string hai jo multiple words contain karti hai
    stringstream obj(Str3); //stringstream class ka object `obj` banaya jo string ko process karega

    string temp;
//stringstream ke through, hum ek-ek word ko extract karenge
    while(obj >> temp){
        // obj stringstream object se ek word le kar `temp` me daalega
        cout<< temp <<endl;// aur us word ko print karega

    }

    return 0;
}
// temp phle ek word print karega hello fir new line then i then new line then am new line