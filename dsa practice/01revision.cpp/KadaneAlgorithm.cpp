#include <iostream>
#include<algorithm>

using namespace std;

int kadanealgorithm (int arr[] , int n){
    int sum =0;
    int maxi = arr[0];
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        maxi = max(maxi , sum );

    
        if(sum < 0)
        {
            sum = 0;
        }
    }

    return maxi ;
}

int main()
{
    int size = 9 ;
    int arr[] = {-2 ,1,-3,4,-1,2,1,-5,4};
    cout<<kadanealgorithm (arr, size)<<endl;
    
    
    return 0;
}
