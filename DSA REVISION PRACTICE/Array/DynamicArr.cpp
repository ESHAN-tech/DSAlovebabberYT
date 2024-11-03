#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array = ";
    cin>>size;

    //For Dynamic allocation we need a pointer 
    int *arr = new int[size];

    //Asing the value in array 
    for(int i = 0 ; i < size ; i++){
        cout<<"enter the element at index "<<i<<" = ";
        cin>>arr[i];
    }
    cout<<endl;

    //Printing the array 
    cout<<"final array = ";
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

    // Deallocate memory to avoid memory leak
    delete[] arr;


    return 0;
}
