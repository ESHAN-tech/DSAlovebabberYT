#include<iostream>
#include<algorithm>
using namespace std;

void movingzero(int arr[] , int n){
    // here we use two pointer approch..............
    int s = 0 ;
    int e = n - 1 ;

    while(arr[s]<0 && s<e){
        s++;
        e--;
    }

    while(arr[e]<0 && s<e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }  
}

void print (int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<< arr[i]<<" ";
    }
}

int main()
{
int size = 8;
int arr[]={1,-2,-3,4,-5,-6,7,-8}
movingzero(arr , size);
print(arr , size);

return 0;


}