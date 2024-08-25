#include <iostream>
#include<algorithm>

using namespace std;
int firstocc(int arr[] , int n , int key )
{
    int s= 0;
    int e = n-1;
    int mid = s+(e-s/2);
    int ans = -1;

    while (s<=e){
        if (key == arr [mid]){
            ans = mid;
            // end ka kaam ktm keroo
            e= mid -1;
        }
        else if (key > arr[mid]){
            // then search on the right part
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans ;
}
int lastocc(int arr[] , int n , int key )
{
    int s= 0;
    int e = n-1;
    int mid = s+(e-s/2);
    int ans = -1;

    while (s<=e){
        if (key == arr [mid]){
            ans = mid;
            // end ka kaam ktm keroo
            s= mid -1;
        }
        else if (key > arr[mid]){
            // then search on the right part
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans ;
}

int totalocc (int arr[] , int n , int key){
    int fo =firstocc (arr, n  , 2 );
    int lo =lastocc (arr, n  , 2 );

    int to = lo - fo +1 ;

    return to;
}

int main()
{
    int n = 8;
    int arr[]={0 , 0 , 1 , 1 , 2  ,2 ,2 ,2};

    cout <<" first occ = "<<firstocc (arr, n  , 2 );
    cout <<" last occ = "<<lastocc (arr, n  , 2 );

    cout << endl;

    
    
  
    return 0;
}
// lies in increasing part of the array ....
            // jab tak uppar wale condition true hoge tab tak s increment hogaa...