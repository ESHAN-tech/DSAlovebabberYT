// Check if an Array is Sorted
#include <iostream>
using namespace std;

//brute force approch
void checkSorted(int* arr , int size ){
    for(int i = 0 ; i < size ; i++){
        for(int j= 0 ; j< size ; j++){
            if(arr[j]<arr[j+1]){
                cout<<" Given array is sorted in asending order ";
                cout<<endl;
            }
            else if (arr[j]>arr[j+1]) {
                cout<<" Given array is sorted in desending order ";
                cout<<endl;
            }
            else{
                cout<<"Given array is not sorted"<<endl;
            }
        }

    }
}

void printarr(int* arr , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={5,4,3,2,1,};
    int crr[5]={4,1,55,22,33};

    checkSorted(arr,5);
    printarr(arr,5);
    cout<<endl;

    checkSorted(brr,5);
    printarr(brr,5);
    cout<<endl;

    checkSorted(crr,5);
    printarr(crr,5);
    cout<<endl;

    return 0;
}


/*
Problem statement:-
Problem Statement: Given an array of size n,
write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
If the array is sorted then return True, Else return False.
*/