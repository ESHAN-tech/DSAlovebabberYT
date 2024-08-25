#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    // basic info______ 
    char a='v';// it will store only single charater 
    cout<<a<<endl;

    //for character array we use string 
    char str[5]={'e','s','h','a','n'};
    for(int i = 0 ; i < 5 ; i++){
        cout << str[i]<<" ";
    }
    
    cout<<endl;
    // '\0' its a null charater used tell the termination or ending of the string 
    char hippo[10]={'b', 'a' , 'b' , 'b' , 'a' ,'r'};//here index 6 ,7 , 8 , 9 have null charater 

    // taking string as input in the program ...

    char name[20];

    cout << "enter your name = ";
    cin>> name ;

    cout<<"your name is "<< name <<endl;
    cout<<endl;

    // string str = "Babbar";

    // int len = str.length();

    // str.push_back('c');

    // str.pop_back();
   
    return 0;
}
