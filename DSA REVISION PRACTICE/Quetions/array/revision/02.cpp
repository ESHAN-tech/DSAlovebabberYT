#include <iostream>
using namespace std;

void IsArraySorted(int* arr , int size){
    int asc=0;
    int desc=0;

    for(int i =0 ; i< size ; i++){
        if(arr[i] < arr[i+1]){
            asc++;
        }
        else if (arr[i] > arr[i+1]) {
            desc++;
        }
    }
    if(asc > 0 && desc == 0){
        cout<<"Given Array is Sorted in non decreasing Order "<<endl;
    }
    else if(desc>0 && asc == 0 ){
        cout<<"Given Array is  Sorted in decreasing Order "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={5,4,3,2,1};
    int crr[5]={1,3,5,2,4};

    IsArraySorted(arr, 5);
    cout<<endl;

    IsArraySorted(brr, 5);
    cout<<endl;

    IsArraySorted(crr, 5);
    cout<<endl;

    return 0;
}
