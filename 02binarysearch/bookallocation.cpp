#include <iostream>
using namespace std;
/*yaha book continous seriers me de ja rhe hai 
like 10 ayega uske baad 20 then uske baad 30 me continous.
so yaha per hame 2 students ko he book dene with good partision
k sath 
note:- 
10,20,30,40 ye book k page hai 

approch 
1st find max and min

2nd find check kero jo num ayaa mid per wo 
shi se partision kar raha hai

3rd if get possible solution then e = mid-1 bcoz possible solution k agee wale be 
possible solution he hongee..or hame min sol find kerna so go to left part

4th if don't get the possible solution then s= mid +1;
*/

bool isPossible(int arr[] ,int n , int m , int mid){
    int studentCount = 1;
    int pageSum =0;
    for(int i = 0 ; i<n ; i++){
        if(pageSum + arr[i] <= mid){
            pageSum+=arr[i];
        }
        else{
            //ager count bada to next student ko book dega
            studentCount++;
            if(studentCount > m || arr[i] > mid ){
                return false;
            }
           
            pageSum=arr[i];
        }
    }
}
int bookallocation(int arr[] , int n){
    int s =0;
    int sum= 0;
    //finding max
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    int e = sum ;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }

}

int main()
{
    
    
    
    return 0;
}
