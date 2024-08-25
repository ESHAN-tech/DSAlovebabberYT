#include <iostream>
#include <algorithm>
using namespace std;

int firstoocr(int arr[] , int n , int key){
    // here we find the first occr
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s <= e){
        if( key == arr[ mid ]){
            //yaha per ans ko store maro and end ka game over bcoz it's first oocr part
            ans = mid ;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        //update the mid....
        mid = s + (e-s)/2;
    }

    return ans;

}
int lastoocr(int arr[] , int n , int key){
    // here we find the first occr
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s <= e){
        if( key == arr[ mid ]){
            //yaha per ans ko store maro and end ka game over bcoz it's first oocr part
            ans = mid ;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        //update the mid....
        mid = s + (e-s)/2;
    }

    return ans;

}
int main()
{
    int n = 8;
    int arr[]={0,0,1,1,2,2,2,2};
    int key =2;

    // calling for the oocr first
    cout<<"first occr index is = " << firstoocr(arr ,  n ,  key);
    cout <<"  last oocr index is = "<< lastoocr(arr ,  n ,  key);
    
    
    
    return 0;
}
