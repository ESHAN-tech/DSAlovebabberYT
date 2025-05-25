#include <iostream>
using namespace std;

void printarr(int* arr , int n){
    for(int i=0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int *arr , int size){
    // ye loop hamesa array k liye he hota hai 
    for(int i = 0 ; i < size ; i++){
        int midindex = i;
        for(int j =i+1 ; j < size ; j++){
            
            if(arr[j]<arr[midindex]){
                midindex = j;
            }
            swap(arr[i] , arr[midindex]);
        }

    }
}

int main()
{
    int arr[5]={10 ,5 , 78 , 45 ,1};

    cout<<"array before sorting:- ";
    printarr(arr, 5);
    cout<<endl;

    cout<<"array after sorting:-";
    selectionSort(arr, 5);
    printarr(arr, 5);
    cout<<endl;

    return 0;
}
