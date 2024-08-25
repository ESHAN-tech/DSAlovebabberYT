#include <iostream>
#include <algorithm>
using namespace std;

int moutainarr(int arr[]  , int n){
    int s = 0 ;
    int e = n-1 ;
    int mid = s+ (e-s)/2;

    while(s < e ){
        // checking for increasing line ..
        if (arr[mid] < arr[mid +1]){
            s = mid +1 ;
        }
        // for decreasing part and the mid part 
        // it is condition where peak ele may me the mid or may present on the decreasing part..
        else{
            e = mid ;  
        }
        mid = s+ (e-s)/2;
    }
}

int main()
{
    int size = 4;
    int arr[]={ 3 ,4 ,5 ,1};

    cout<< " it is the index of the mout arr = "<<moutainarr(arr  , size );
    
    
   
    return 0;
}
