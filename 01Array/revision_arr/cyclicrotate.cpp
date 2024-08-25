/* Given an array arr , rotate the arrya by one position in clock- wise direction 
 input  arr = { 1 , 2  , 3 , 4  , 5 }
 output arr = { 5 ,1 , 2 , 3 ,4 }

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:-
1<=arr.size()<=10^5
0<=arr[i]<=10^5

*/


#include<iostream>
#include<algorithm>
using namespace std;

void cyclicRotate(int *arr , int n )
{
    // last element liyaa 
    int last_ele = arr[n-1];
    //decrement order me loop chala 
    for(int i = n-1; i > 0; i--)
    { arr[i] = arr[i-1];}
    // last element ko starting index me daal diya 
    arr[0] = last_ele;
}


void print(int *arr , int n){
    for(int i= 0 ; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[5]={  1 , 2  , 3 , 4 , 5 };
    cyclicRotate(arr , 5 );
    print(arr , 5);
    cout<<endl;
    
    
    
    return 0;
}
