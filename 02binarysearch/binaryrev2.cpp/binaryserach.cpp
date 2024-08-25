#include <iostream>
#include<algorithm>

using namespace std;

int binarysearch (int arr[] , int size , int key )
{
    int s=0 ;
    int e = size -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(key == arr[mid]){
            return mid ;
        }
        else if (key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
}
int main()
{
    int n=5;
    int arr[]={ 78 ,89 ,100 ,147, 500};
    int key = 147;

    cout << binarysearch (arr, n, key );
    cout <<endl;

    /* 
    it's a wrong syntax....
    cout <<arr[mid];
    cout <<endl;
    */
    
    
    
    return 0;
}
