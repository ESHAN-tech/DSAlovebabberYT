#include <iostream>
using namespace std;

//trying bubble sort ( self try)

// void BubbleSort(int* arr , int n){
//     for(int i = 0 ; i < n-1; i++){
//         for(int j = i+1 ; j < n){
//             if(arr[i]>arr[j])
//             {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
// }

void print(int* arr , int size ){
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int * arr , int size){
    for(int i = 0 ; i < size ; i++){// yaha i ke ek value me j k sare loop chal jayenge...
        for(int j=0 ; j<size ; j++){// ye j loop i wale me modification ker raha hai... 
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[5]={45 , 78 , 3 , 2 ,57};
    bubbleSort(arr, 5);
    print(arr, 5);
 
    return 0;
}
