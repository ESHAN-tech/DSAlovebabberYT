#include <iostream>
using namespace std;



int main()
{
    // declerating the array in the main function 
    int n=5;
    int arr[5]={1 ,  2 , 3 , 4 , 5 };

    // printing the array 
    for(int i=0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //creating a new array by taking a input from the user
    int k;//taking inpust as a size of array 
    cout<<"Enter the size of brr  array = ";
    cin>>k;
    int brr[k];
    ///taking element as input in the array , if we don't give any value as input then it takes a garbage value
    for(int i = 0 ; i < k ; i++){
        cout<<"enter the element at index "<<i<<"=";
        cin>>brr[i];
        
    }

    // now print the array 
    cout<<"array brr = ";
    for(int i = 0 ; i< k ; i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // dynamic allocation of the array , dynamic alloacation we use pointer and keyword 

    int size ;// taking size as input 
    cout<<"Enter the size of the array =";
    cin>>size;

    int * crr= new int[size];

    //taking element as input in the crr    
    for(int i=0 ; i < size ; i++){
        cout<<"enter the element at index "<<i<<" in crr =";
        cin>>crr[i];
    }

    //printing the element of crr
    for(int i = 0 ; i < size ; i++){
        cout<<crr[i]<<" ";
    }
    
    return 0;
}
/*
here i am going to the revision of the of the array 
*/