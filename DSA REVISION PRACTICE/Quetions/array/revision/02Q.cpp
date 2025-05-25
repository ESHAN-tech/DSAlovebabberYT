//check array is sorted or not 
#include <iostream>
using namespace std;

int IsArraySorted(int* arr , int size ){
    for(int i = 0 ; i< size ; i++){
        if(arr[i]<arr[i+1]){
            return 1;
        }
    }
   return 0;
}


int main()
{
    int arr[5]={1,2,3,4,5};

    int result = IsArraySorted(arr,5);

    if(result == 1){
        cout<<"array is shorted";
    }
    else{
        cout<<"array is not shorted ";
    }
    return 0;
}
