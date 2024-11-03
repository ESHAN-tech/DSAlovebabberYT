#include <iostream>
using namespace std;

void arrarydyan(int*arr , int size){
    //intialize dyanamic arr
    arr = new int[size];

    //Taking input a array...
    for(int i = 0 ; i < size ; i++){
    cout<<"enter the element at index "<<i<<" = ";
    cin>>arr[i];
    }
    cout<<endl;

    //Printing the array...
    cout<<"Final Array = ";
    for (int i = 0 ; i<size ; i++)
    {
       cout<<arr[i]<<" ";
    }
   
}

int main()
{
    int size;
    cout<<"enter the size of array = ";
    cin>> size;

    int *arr = new int[size];
    arrarydyan(arr,  size);

    return 0;
}
