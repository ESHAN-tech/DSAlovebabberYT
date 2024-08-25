#include <iostream>
#include<algorithm>
using namespace std;

void movezero(int *arr , int n){
// here iam using two pointer._._.
    int s =0;
    int e = n-1;
    while( s < e){

    // if value at right side > 0 ignore
    while(arr[s]>0 && s<=e)
    {
        s++;
    }

    while(arr[e]<0 && s<=e)
    {
        e--;
    }

    while(arr[s]<arr[e])
    {
        swap(arr[s] , arr[e]);
        
        s++;
        e--;

    }
    }

}

void print(int *arr , int n ){
    for(int i = 0 ; i < n ; i++){

        cout<<arr[i]<<" ";

    }cout<<endl;
}

int main()
{
    int n = 7;
    int arr[7]={4,5,0,19,0,5,0};
    movezero(arr ,  n);
    print(arr , n );

    
    
   
    return 0;
}

/*

Problem Description NQT 
A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array arrt of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).
For Example: N=7 and arr = [4,5,0,19,0,5,0]. There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

Input
7-Value of N

Output 4519500
[4,5,0,1,0,0,5]

Element of arr[O] to arr[N-1], While input each element is separated by newline

Input
6-Value of N
Output 618200

[6,0,1,8,0,2] Element of arr[0] to arr[N-1], While input each element is separated by newline

*/
