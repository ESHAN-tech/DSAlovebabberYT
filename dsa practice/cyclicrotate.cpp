//Cyclically rotate an array by ones
// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

void cyclicrotate (int arr[] , int n ,int crr[] ){
    int ans = arr[n];
    for(int i = 0 ; i < n ; i++)
    {
       crr[i]=arr[i+1];
    }
    crr[0]=ans;
}


void print(int arr[] , int size ){
    for(int i = 0 ; i < size ; i++){
    cout<< arr[i]<<" ";
    }
}

int main() 
{
    
    int n = 7;
    
    int arr[]={1,2,3,4,5,6,7};
    
    int crr[7];
    
    cyclicrotate (arr , n ,crr);
    
    print(crr, n);
    
    
    return 0;
}