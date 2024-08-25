#include<iostream>
#include<algorithm>
using namespace std;

int firstoccr(int arr[] , int n , int key )
{
    int s = 0;
    int e = n-1 ;
    int mid = s + (e-s/2);
    int ans =-1;

    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            e=mid-1;
        }
        else if( key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s/2);
    }
    return ans;
}
int lastoccr(int arr[] , int n , int key )
{
    int s = 0;
    int e = n-1 ;
    int mid = s + (s-e/2);
    int ans =-1;

    while(s<=e){

        if(key == arr[mid]){
            ans=mid;
            s=mid+1;
        }

        else if( key > arr[mid]){
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid = s + (s-e/2);
    }

    return ans;
}
int main()
{
    int n = 8;
    int key =2 ;
    int arr[]={0 , 0 , 1 , 1 , 2  ,2 ,2 ,2};

    cout <<" first occ = "<<firstoccr (arr, n  , key);
    cout <<" last occ = "<<lastoccr (arr, n  , key );


    cout << endl;

    return 0;
}
