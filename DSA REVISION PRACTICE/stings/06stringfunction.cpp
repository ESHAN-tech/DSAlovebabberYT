/*
strrch() C++ :- this function works on the char arrays 
use:-
find last occurrence (aakri baar) in a charter string 

str:- it is char array where u finding the particular char 
ch:- leting it a last char of the string... 
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    const char* str = "Hello World";
    char ch = 'o';

    //storing the result in an pointer 
    const char* result = strrchr(str  , ch);

    if(result != NULL){
        cout<<"character "<< ch <<" found at position: "<<(result - str + 1)<<endl;
    }else{
        cout<<" character not found..."<<endl;
    }

    // strcat()
    char dest[20]="Hello";
    char src[]= "world";
    strcat(dest , src);
    // strcat(src , dest); why ello comes ?

    cout<<"After Strcat : "<<dest<<endl;


    //strncat():-
    char dest2[20]="hello";
    char src2[]="world";

    strncat(dest2 , src2 , 3);
    cout<<"After strncat: "<<dest2<<endl;

    //find():-
    string gamma = "hello Harsh!!!";

    // finding first occ of "harsh"
    size_t found = gamma.find("Harsh");

    if(found != string::npos){
        cout<<"Substring found at index: "<<found<<endl;

    }else{
        cout<<"Substring is not found!"<<endl;
    }

    //replace() :- replace a part of string with another string...
    string test = "I love programming";

    //replacing programing with coding...
    test.replace(7 , 11 , "coding");
    
    cout<<test<<endl;

    //substr():-

    string sub ="hey harsh hello";

    string substr1 = sub.substr(4,5);
    // 4 :- intial index from where we start... 
    //5:- taking num of charater after 4...

    cout<<substr1<<endl;

   

    // compare():- used to compare two string or the part of sting...

    string check1 = "Apple";
    string check2 = "banana";

    int check_result = check1.compare(check2);

    if(check_result == 0) {
        cout << "Strings are equal" << endl;
    } else if(check_result < 0) {
        cout << "check1 is lexicographically less than check2" << endl;
    } else {
        cout << "check2 is lexicographically less than check1" << endl;
    }

    //erase():- used to remove the char from the string...

    string erra = "kali ka kaal ki jai";

    erra.erase(5,7);

    cout<<"After Eraser : "<<erra << endl;

    return 0;
}
/*
strcat():- 
Appends (concatenates) the entire source string to the destination string.
Automatically adds a null-terminator.
Higher risk of buffer overflow.
strcat(dest, src);

strncat():-
Appends a specified number of characters from the source string to the destination string.
avoid buffer overflow.
Also adds a null-terminator at the end.
strncat(dest, src, 5);

find():- substring jo find kerna hai uska ye staring index bata dega 
If the substring is not found, it returns std::string::npos.
size_t find(const string& str, size_t pos = 0) const;
str: The substring to search for within the string.
pos: The position from where the search should begin (default is 0).

//substr():-
used to extract the substring from string:-
string substr(size_t pos = 0, size_t len = npos) const;

// compare():-
int compare(const string& str) const;
int compare(size_t pos, size_t len, const string& str) const;




*/
