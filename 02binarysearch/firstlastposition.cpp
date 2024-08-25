#include <iostream>
#include<algorithm>

using namespace std;
// here we have make two different function for first and the last occurance of the array 
// if k is not present then first and the last occ  will  be -1 
int Firstoccr(int arr[] , int n  , int  key )
{
    int s = 0 ;
    int e = n-1 ;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s<=e ){
        

        if ( arr [ mid ] == key ){
            ans = mid ;
            e = mid -1 ;
        
        }

        else if ( key > arr[mid]){
            // search in the right part 
            s= mid +1 ;

        }
        else {
            e = mid -1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccr(int arr[] , int n  , int  key )
{
    int s = 0 ;
    int e = n-1 ;
    int ans = -1;
    int mid = s +(e-s/2);

    while (s<=e ){
    
        if ( arr [ mid ] == key ){
            ans = mid;
            s=mid+1 ;
        }
        else if ( key > arr[mid]){
            // search in the right part 
            s= mid +1 ;
        }
        else {
            e = mid -1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int totalocc(int arr[], int n, int key) {
    int fo = Firstoccr(arr, n, key); // Use key instead of hardcoded 2
    int lo = lastoccr(arr, n, key); // Use key instead of hardcoded 2

    // If key is not present in the array
    if (fo == -1 || lo == -1) {
        return 0;
    }

    int to = lo - fo + 1;
    return to;
}

int main()
{
    int n = 8;
    int arr[]={0 , 0 , 1 , 1 , 2  ,2 ,2 ,2};

    cout <<" first occ = "<<Firstoccr (arr, n  , 1 );
    cout <<" last occ = "<<lastoccr (arr, n  , 1 );


    cout << endl;

    cout << "total occr is = "<<totalocc (arr, n  , 1 );

    
    
  
    return 0;
}
