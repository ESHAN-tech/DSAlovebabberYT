// find second smallest number 
#include <iostream>
using namespace std;

int secondlast(int* arr , int size)
{
    int max=-9999;
    int k = -9999 ;
    for(int i = 0 ; i < size ; i++){
       
        if(max < arr[i]){
            k=max;
            max =  arr[i];
        }
    }
    return k;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<secondlast(arr, 5)<<endl;

    int brr[5]={10,52,13,40,15};
    cout<<secondlast(brr, 5)<<endl;

    int crr[5]={1,2,3,4,5};
    cout<<secondlast(crr, 5)<<endl;

    return 0;
}
