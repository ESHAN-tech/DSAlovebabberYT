//How to Pass Strings to Functions?
#include <iostream>
using namespace std;

void print (string str){
    cout<<" passed string is = "<<str<<endl;
    return;
}

int main()
{
    string s ="GeeksForGeeks";
    print(s);

    //Pointer and String...
    string shree = "RadheKrishna";

    char *p = &shree[0];//store the starting address of string
    while (*p != '\0'){
        cout<<*p;
        p++;
    }
    cout<<endl;

    return 0;
}

// Home Work see difference between the string and char array 
