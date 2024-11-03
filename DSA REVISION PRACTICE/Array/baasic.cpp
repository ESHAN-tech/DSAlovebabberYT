#include <iostream>
using namespace std;

//Here we will do static alloaction of the array

void print(int *arr , int n){
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n = 5;
    int arr[5]={1,2,3,4,5};
    cout<<"array number 1 = ";
    print(arr, 10);
    cout <<endl ;
    // Here The Garbage Value Comes 

    int m = 7;
    int brr[7]={1,2,3,4,5 , 6 , 7};
    cout<<"array number 2 = ";
    print(brr, m);
    cout <<endl ;


    int l = 5;
    int crr[5]={1,2,3};
    cout<<"array number 3 = ";
    print(crr, l);// here i am also printing the empty space 
    cout <<endl ;
    //No garbage value instead of that we get 0

    int p = 10;
    int drr[10]={1,2,3,4,5 , 6 , 7 ,8 , 9 ,10};
    cout<<"array number 4 = ";
    print(drr, p);
    cout <<endl ;


    return 0;
}
