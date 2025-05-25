// check weather array is shorted or not... 
#include <iostream>
using namespace std;

// ager alternate element ek dusre chote then 

void isArraySorted(int* arr , int n){
    int asc = 0 ;
    int desc = 0 ;

    for(int i =0 ; i < n ; i++){
        if(arr[i]< arr[i+1]){
            asc++;
        }
        else {
            desc++;
        }
    }

    if (asc > 0 && desc == 0){
        cout<<"array is sorted in accending order ";
    }
    else if (desc > 0 && asc == 0) {
        cout<<"Array is sorted in decending order ";
    }
    else{
        cout<<"array neither in asc nor in desc"
    }
}

int main()
{
    int arr 
    return 0;
}
