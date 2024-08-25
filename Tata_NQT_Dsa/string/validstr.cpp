#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int valid_String( string str , int size){
    int countstar=0;
    int counthash=0;

    for(int i =0 ; i < size ; i++){
        if (str[i] == '*'){
            countstar++;
        }
        else{
            counthash++;
        }
    }

    if(countstar > counthash){
        return -1;
    }
    else if( countstar < counthash){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int size = 6 ;
    string str =  "###***";
    cout<<valid_String( str ,  size)<< endl;
    

    

    
   
    return 0;
}
/*

Given a string S(input consisting) of *" and '#'. The length of the string is variable. The task is to find the minimum number of '*' or '#' to make it a valid string. The string is considered valid if the number of "*" and '#' are equal. The" and "" can be at any position in the string.

Note: The output will be a positive or negative integer based on number of "*" and '#' in the input string.

(*>#): positive integer (#>*): negative integer

(#=*): 0

Input

###*** -> Value of S

Output

0 number of * and # are equa
*/
