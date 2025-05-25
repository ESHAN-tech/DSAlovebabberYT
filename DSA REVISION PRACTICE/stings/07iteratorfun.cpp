#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    // begin() example
    string str = "Hello World";

    // Using begin to get an iterator on the first character 
    string::iterator it = str.begin();
    *it = 'h'; // Change first character to 'h'

    cout << "Modified string: " << str << endl;  // Output: hello World

    // Using Loop with begin() and end()
    string str2 = "Hello Eshan";

    // Loop through the string using str2.begin() and str2.end()
    for (string::iterator it = str2.begin(); it != str2.end(); ++it) {
        cout << *it;  // This will output: Hello Eshan
    }
    cout << endl;

    // const_iterator example
    const string str3 = "Hello Harsh";

    // Loop through str3 using const iterators (read-only)
    for (string::const_iterator it = str3.begin(); it != str3.end(); ++it) {
        cout << *it;  // This will output: Hello Harsh
    }
    cout << endl;

    //rfind():- find the last occurrence of a substring or character within a string.
    //starts searching from the beginning of the string

    string sentence ="NOW!! I BECAME A DESTROYER OFF THE WORLD ";

    size_t found = sentence.rfind("THE");

    if(found!= string::npos){
        cout<<"Substring found at index: "<<found<<endl;
    }else{
        cout<<"Substring not found!"<<endl;
    }

    //rbegin():- It returns a reverse iterator to the last element of the string
    for(string::reverse_iterator rit = str.rbegin(); rit!= str.rend(); ++rit){
        cout << *rit;// Output :- dlroW olleh
    }
    cout << endl;

   

    //rend():-returns a reverse iterator to the element before the first element of the string or container.
    //iterator cannot be used to modify the elements it points to...

    for(string::const_iterator it = str.cbegin(); it != str.cend(); ++it){
        cout<<*it;//cannot modify *it because it's const
    }

    cout << endl;
    // This function returns a const_iterator pointing to the end of the string.

    // crbegin() to get a constant reverse iterator to the last character
    for (string::const_reverse_iterator it = str.crbegin(); it != str.crend(); ++it) {
        cout << *it;  // Reading characters in reverse order
    }
    cout << endl;

    //crend function returns a const_reverse_iterator pointing to the beginning of the string.
    
    return 0;
}

/*
size_t is an unsigned integer data type specifically 
designed to represent the size of any object in bytes.

In C++, string::npos is a special constant value used to indicate that no valid position was found in a string search.
It's often used with functions like find(), rfind(), or find_first_of() that return the position of a substring or
character within a string. If these functions cannot find the substring or character, they return string::npos...

*/