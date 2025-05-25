//leftrotate once
#include <iostream>
using namespace std;
void printarr(int* arr , int size){
    for(int i =0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

void leftRotateOnce(int* arr , int size){
    int firstele= arr[0];
    for(int i=0; i<size-1 ; i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=firstele;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    leftRotateOnce(arr, 5);
    printarr(arr, 5);

    cout<<endl;        

    int brr[5]={6,7,8,9,10};
    leftRotateOnce(brr, 5);
    printarr(brr, 5);
     
    return 0;
}
