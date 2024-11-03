#include<iostream>
#include<algorithm>
using namespace std ;

int kthminelem(int arr[] , int size , int kth){
    sort(arr , arr+size);

    // returning the kth smallest element ...
    return arr[kth-1];
}

int main(){
    int n = 7 ;
    int arr[] = {10,13,5,27,9,11,13};
    int k = 4;
    
    cout<<kthminelem( arr , n , k);

    return 0;
}