#include <iostream>
using namespace std;

void bubbleSort(int* arr , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size  ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selection(int* arr , int size){
    for(int i = 0 ; i < size  ; i++){
        int minIndex = i;
        for(int j = i+1 ; j < size ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}
void print(int* arr , int size ){
    for(int i =0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array(<50) :- ";
    cin>>size;

    int arr[50];
    cout<<"...Enter a element in a array..."<<endl;
    for(int i = 0 ; i < size; i++){
        cout<<"enter a element at the index  "<<i<< " = " ;
        cin>>arr[i];
    }
    bubbleSort(arr, size);
    print(arr, size);
    cout<<endl;

    int arr2[25];
    int size2;
    cout<<"Enter the size of array2(<=25) = ";
    cin>>size2;

    for(int i= 0 ; i< size2 ; i++){
        cout<<"Enter the element at index "<<i<<" = ";
        cin>>arr[i];
    }
    selection(arr2, size2);
    print(arr2, size2);

    
    
    return 0;
}
