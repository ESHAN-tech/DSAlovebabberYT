#include <iostream>
#include<algorithm>
using namespace std;

int lenthofstr(char str[]){
    int count =0 ;
    for(int i = 0 ; str[i]!= '\0' ; i++){
        count++;
    }
    return count;
}

int main()
{
    char hipo[20]="eshan";
    cout <<lenthofstr(hipo);

    return 0;
}
