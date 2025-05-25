//String Function...
//we can't use buitIn function in the char array 
#include <iostream>
#include <string>
using namespace std;

//push_back() Function 
void push_backDemo(string str1 , string str2){

    //appending the character at the end of the string 
    for(int i = 0 ; str2[i] != '\0' ; i++){
        str1.push_back(str2[i]);// str1 me str2 k sare character daal dete hai..at the end 
    }
    cout<<"After push_back : ";
    cout<<str1;
}

//pop function () :- Used to remove the last charater from the string 

void pop_backDemo(string& str){
    str.pop_back();
    cout<<"After Pop_back : "<<str<<endl;
}

//clear() Function :- used to clear the string 
void clearDemo(string& str){
    str.clear();
    cout<<"After clear : "<<str<<"'"<<endl;
}

int main()
{
    // .length() function ... it count spaces also
    string str = "iamEshanTiwari ";

    cout<<"Length of the string is = "<<str.length()<<endl;

    //char s[]={'h' ,'a' , 'r' , 's' ,'h' ,'\0'};
    //cout<<"Length of the string is = "<<s.length();

    //.swap() function...
    string str1 = " hello ";
    string str2 = " hey ";

    swap(str1 ,  str2);

    cout<<" str1 now = "<< str1<< endl;
    cout<<" str2 now = "<< str2<<endl;

    //size() function :- Used to find the size of string(it also called spaces)
    cout<<"size of the string is = "<<str.size()<<endl;

    //resize()  function :- print char till size 8
    str.resize(8);
    cout<<"resize of str is = "<<str<<endl;

    //find():- Used to find the string which is passed in parameters
    // pending part...

    // push_back() part 

    string str3("Eshan");
    string str4("tiwari");

    cout<<" original string : "<<str3<<endl;
    push_backDemo(str3,  str4);
    cout<<endl;

    //pop_back():-This function is used to pop the last character from the string 
    pop_backDemo(str3);
    cout<<endl;

    clearDemo(str3);
    cout<<endl;

    return 0;
}
