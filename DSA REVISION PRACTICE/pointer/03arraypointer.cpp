#include <iostream>
using namespace std;
// iteratate the element of the array 
void meraArr(){
    //declaring the array... 
    int val[3] = {5 ,10 , 20 };

    //declare the pointer...
    int *ptr;

    ptr = val;// or ptr = &val[0];
    cout<<"element in array = ";
    cout << ptr[0]<<" "<<ptr[1]<<" "<<ptr[2];
}
//pointer arithmatic...
void ptr_matic(){
    //declare an array 
    int v[3]={10 , 100 , 200};
    //declare pointer 
    int* ptr;
    //assign the address of v[0] to ptr 
    ptr = v;
    
    for(int i =0 ; i < 3 ; i++){
        cout<<"Value at ptr = "<< ptr <<endl;
        cout<<"Value at *ptr = "<<*ptr<<endl;

        //incrementing the pointer 
        ptr++;
    }

}

void ptrArithmetic(){
    //declare the array
    int arr[] = {10, 20, 30};
    int* p =arr;
    //increment... 
    p++;
    // cout<<"value of p = "<<p<<endl;
    cout<<"value of *p after increment = "<<*p<<endl;

    //decrement...
    p--;
    cout<<"value of *p after decriment = "<<*p<<endl;
    // Pointer + Integer ( + or += ):
    p +=2;
    cout<<"value of *p Pointer + Integer = "<<*p<<endl;
    //Pointer - Integer
    p -=2;
    cout<<"value of *p Pointer - Integer = "<<*p<<endl;

    // Difference between Two Pointers (p1 - p2)
    
    int* p1 = &arr[2];
    int* p2 = &arr[1];
    int diff = *p1 - *p2;

    cout<<"diff is = "<<diff<<endl;


}
int main()
{
    meraArr();
    cout<<endl<<endl;

    ptr_matic();
    cout<<endl<<endl;

    ptrArithmetic();
    cout<<endl<<endl;


    return 0;
}
