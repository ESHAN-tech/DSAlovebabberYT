#include <iostream>
using namespace std;

void printarr(int* arr , int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    
}
void selectionShort(int *arr , int n){
    for(int i=0 ; i < n-1 ; i++){
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i] , arr[minIndex]);
    }
}
int main()
{
    int arr[7]={0,5,89,5,100,24,14}; 
    cout<<"Array before the selection sort = ";
    printarr(arr, 7); 
    cout<<endl;

    selectionShort(arr, 7);

    cout<<"Array after the selection sort = ";
    printarr(arr, 7); 
    cout<<endl;
    

    return 0;
}
