#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*

    std::strncmp() C++ mein ek function hai jo do character arrays (C-strings) ko compare karta hai.
    Ye function specified number of characters ko compare karta hai.
    Iska kaam yeh dekhna hota hai ki dono strings pehle n characters tak barabar hain ya nahi.

    int strncmp(const char *str1, const char *str2, size_t n);
        str1: Pehla string jo aap compare karna chahte ho.
        str2: Dusra string jo aap compare karna chahte ho.
        n: Kitne characters tak compare karna hai.

    */

    const char* str1 = "GeeksforGeeks";
    const char* str2 = "Geeks";

    int result = strncmp(str1 , str2 , 8); // it will compare both the string till 8th char 

    if(result == 0){
        cout<<"First 5 character are the same. "<<endl;
    }
    else if (result > 0) {
        cout<<"str1 is lexicographically greater than str2. " <<endl;
    }
    else{
        cout<<"str1 is lexicographically smaller than str2. "<<endl;
    }

    // strcpy function ...
    char src[]="HelloEshan";
    
    char dest[11];

    strcpy(dest , src);
    
    int len = strlen(dest);

    cout<<" copied string : "<< dest<<endl;
    cout<<" length of the destination : "<<len<<endl;

    return 0;
}
