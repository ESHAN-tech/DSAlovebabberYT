#include <iostream>
using namespace std;

int pivotele (int arr[] , int n){
    // array ko rotate kerene per like k=2,3 or 4 per
    //to max diff bunta hai min or max ele of arr ka ushe min ele ko pivot kehte hai
    int s=0;
    int e = n-1 ;
    int mid = s+(e-s)/2;

    while(s<e){
        // yaha uppar or lower line hote hai...
        if(arr[0] <= arr[mid]){
            //means lies in uppar line . . .
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;

}

int main()
{
    int n =5;
    int arr[]={7,9,1,2,3};
    cout<<pivotele (arr , n);
    
    return 0;
}
