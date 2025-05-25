#include <iostream>
#include <string>
using namespace std;


int main()
{
    //declaring string... (I)
    cout<<" static alloaction of string :-"<<endl;
    char s[] = "GeeksforGeeks";
    cout<<s<<endl;

    //Another way of declaring the string...(provide dynamic size) (II)
    cout<<" Dyanamic alloaction of string :-"<<endl;
    string str("GeeksforGeeks");
    cout<<str<<endl;

    //One more way we can make strings that have the same character repeating again and again.
    string str2(5,'g');// sting ka size 5 hai or sabme ggggg hai
    cout<<str2<<endl;

    //METHOD OF CPP STRING...

    // 1. Using string Keyword___
    string str3 = "GeeksForGeeks";
    string str4("GeeksforGeeks");
    cout<<str3<<endl;
    cout<<str4<<endl;

    // 2. Using C-style strings___
    char s1[]={'g','f','g','\0'};
    char s2[4]={'g' , 'f' , 'g' , '\0' };
    char s3[4]="gfg";
    char s4[]="gfg";

    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<"s3 = "<<s3<<endl;
    cout<<"s4 = "<<s4<<endl;


    // Another example of C-style string
    string str5 = "Geeeks for Geeks";
    cout << "Your string is= ";
    cout << str5 << endl;

    return 0;
}
