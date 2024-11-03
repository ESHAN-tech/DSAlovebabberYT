#include<iostream>
#include<algorithm>
using namespace std;

int kthmin (int arr[] , int n , int k){
    sort(arr , arr+n);// here header file algorithm works 
    return arr[k-1];
}


int main(){
    int n = 5;
    int arr[]={1,20,3,8, 40 , 0};
    cout<<kthmin ( arr , n , 3);

    return 0; 
}