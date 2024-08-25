#include <iostream>
#include<algorithm>
using namespace std;
void movenegative(int *arr , int size )
{
    //here we use two pointer approch...
    int s = 0;
    int e = size -1 ;
    
    while(s<=e)
    {

    while(arr[s] < 0 && s<=e)
    {
        s++;
    }

    while(arr[e] > 0 && s <= e)
    {
        e--;
    }
    if(arr[s] > arr[e]){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
    }
}
void print (int *arr , int n){
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size = 8;

    int arr[8]={-1 , 2 , -3 , 4 ,-5 , 6 , -7 , 8 };
    cout<<" THIS INTIAL ARRAY = "<<endl;
    print (arr ,size);
    cout<<endl;

    cout<<" move negative ARRAY = "<<endl;
    movenegative(arr ,size );
    print (arr ,size);
    
    
    
    return 0;
}
