#include<iostream>
#include<algorithm>
using namespace std;

void movenegative(int arr[] , int n ){
   int s = 0 ; 
   int e = n-1 ;
   while(s<=e){
    // detecting the non zero at the left side 
    //Is loop ka kaam hai array ke left side se pehla non-negative element dhundhna or ager element present h incriment and no swap 
        while (arr[s] < 0 && s < e) {

            s++;
        }
        //Is loop ka kaam hai array ke right side se pehla negative element dhundhna ager -ve ele ni hoga to increment
        while (arr[e] >= 0 && s < e) {
            e--;
        }
        // ager starting elemt +ve and last wala -ve then swap bcoz sare -ve left side rahenge
        if (arr[s]>arr[e])
        {
            swap(arr[s] , arr[e]);
            s++;
            e--;
        }

   }
}

void print(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}

int main()
{
int n = 6;

int arr[] = {7 , -10 , 4 , -3 , 20 , -15};

movenegative(arr , n );
print( arr , n );

cout<<endl;

return 0;

}