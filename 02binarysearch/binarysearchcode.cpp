#include <iostream>
#include<algorithm>
using namespace std;

int binarysearch (int arr[] , int n , int key){
    // here in binary search array must be shorted ....
    int s = 0;
    int e = n-1;
    

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key){
            return mid ;
   
        }

        else if (key > arr[mid]){
            // now key has to search at the right part....
            s=mid+1;
           
        }

        else{
            e=mid-1;
            
        }

        mid = mid = s + (e - s) / 2;
    
    }
    return -1;

}

int main()
{
    int n = 7;
    int arr[]={1,5,6,10,15,18,20};
    cout<<binarysearch (arr , n ,18);

    
    
    
    return 0;
}
