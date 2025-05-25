//Find Second Smallest and Second Largest Element in an array
#include <iostream>
using namespace std;

// here i am write the logic of max 
int largestElement(int* arr , int size){
    int max = -9999;//Most smallest number
    for(int i =0 ; i < size ; i++){
        if(arr[i]>max){
            max=i;
        }
    }
    return max;
}

int secondlargest(int* arr , int size){
    int ans=0;
    int maxindex = largestElement(arr,  size);
    arr[maxindex]=0;
    for(int i =0 ; i < size ; i++){
        int newMax= largestElement(arr,  size); 
        ans = arr[newMax];
    }
    return ans;
    
}

int main()
{
    int arr[5]={1 , 2 , 3 , 1 , 5};
    
    int result = secondlargest(arr, 5);

    cout<<"second largest element = "<< result<<endl;



    return 0;
}


