#include <iostream>
using namespace std;

void printarr(int* arr , int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int* arr , int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[7]={1 , 88 , 75 ,22 , 5 , 25 ,37};

    cout<<"Array before the sorting :- ";
    printarr(arr,7);
    cout<<endl;

    cout<<"array after the sorting :- ";
    bubblesort(arr,7);//o(n^2)
    printarr(arr, 7);

    return 0;
}
