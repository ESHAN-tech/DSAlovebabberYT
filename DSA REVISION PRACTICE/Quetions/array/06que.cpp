// Linear Search
#include <iostream>
using namespace std;

int linearSearch(int* arr , int key ,int size){
    for(int i =0 ; i<size ; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[7]={1,5,8,7,9,3,2};
    int key = 9;

    int result = linearSearch(arr,key,7);

    if(result == 1){
        cout<<"Element is present in the array"<<endl;
    }
 

    else{
        cout<<"Element is not present in the array"<<endl;
    }
    cout<<endl;


    return 0;
}
