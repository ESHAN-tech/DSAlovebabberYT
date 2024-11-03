#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void mergeshortedarr(int* arr1 , int n , int* arr2 , int m , int* arr3)
{
    int k = 0;
    int i=0 , j=0;
    while (i < n && j < m)
    {

    if(arr1[i]<arr2[j])
    {
    arr3[k++]=arr1[i++];
    }

    else{
    arr3[k++]=arr2[j++];
    }
    }
    //Copy remaining elements of arr1[], if any left
    while( i < n ){
        arr3[k++]=arr1[i++];
    }
    //Copy remaining elements of arr1[], if any
    while( j < m){
        arr3[k++]=arr2[j++];
    }
  
}

void print(int*arr , int n){
    for(int i=0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n = 3;
    int arr[3]={1,3,5};

    int m = 2;
    int brr[2]={2 ,4};

    int crr[5];

    mergeshortedarr(arr , n , brr , m , crr);

    print(crr ,5);
       
    return 0;
}

