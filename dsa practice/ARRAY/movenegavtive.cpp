#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;


// void movenegative(int arr[] , int n ){

//     int s =0 ;
//     int e = n-1;

//     while( arr[s]< arr[e] && s<=e){
//         s++;
//         e--;

//     }

//     while( arr[s] > arr[e] && s <= e)
//     {
//         swap(arr[s] , arr[e]);
//         s++;
//         e--;

//     }
// }
void movenegative (int arr[] , int size ){
    int s = 0 ;
    int e = size -1;

    while (s<e)
    {
        //Is loop ka kaam hai array ke left side se pehla non-negative element dhundhna.
        while (arr[s] < 0 && s < e) {

            s++;
        }
        //Is loop ka kaam hai array ke right side se pehla negative element dhundhna.
        while (arr[e] >= 0 && s < e) {
            e--;
        }
        if (arr[s]>arr[e])
        {
            swap(arr[s] , arr[e]);
            s++;
            e--;
        }
       
    }
    
}

void print(int *arr , int size ){
    for(int i =0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n = 10;
    int arr[10]={ -1 , 2 , -3 , 4 , -5 , 6 , -7 ,8,-9,10};
    movenegative( arr, n );
    print(arr , n );


    return 0;

}


/*
here we have move the negative without affecting the actual order of 
the array...

if negative num present at left side then swap with left...
if negative num present already at left side then ignore... 
if positive num present at right side then ignore...
*/