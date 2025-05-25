#include <iostream>
using namespace std;
void printValue(void* ptr ,char type){
    switch(type){

        case 'i'://integer 
        cout<<"Interger Value:"<<*(int*)ptr<<endl;
        break;

        case 'f'://float
        cout<<"float Value : "<<*(float*)ptr<<endl;
        break;

        case 'c': //character
        cout<<"Character value : "<<*(char*)ptr<<endl;
        break;

        default:
        cout<<"Unknown type"<<endl;
        break;
    }
}
int main()
{
    int num = 10;
    float decimal = 5.5;
    char letter ='A';

    //using void pointer 
    void* ptr;

    //pointing to an integer 
    ptr =&num;
    printValue(ptr , 'i');

    //pointing to a float 
    ptr = &decimal;
    printValue(ptr , 'f');

    //pointing to a char 
    ptr = &letter;
    printValue(ptr , 'c');

   
    return 0;
}

/*
Special type of data which can point any data type 
they are coomon 
their data type is not predefined  

WHY WE USE  void pointer 
1. Generic function 
2.Low lwevel memory operation 
3.

 */