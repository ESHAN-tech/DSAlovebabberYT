// Left Rotate the Array by One

#include <iostream>
using namespace std;

void print(int* arr , int size){
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void leftrotate(int*arr , int size){
    int first = arr[0];
    for(int i = 0 ; i<size-1 ; i++){
        arr[i]=arr[i+1];
        // arr[size]=first; it's show the correct output but the approch of this question is wrong 
    }
    arr[size-1]=first;   
}
int main()
{
    int arr[5]={1,2,3,4,5};
    leftrotate(arr, 5);
    print(arr, 5);

    return 0;
}
/*

Example 1:
Input:
 N = 5, array[] = {1,2,3,4,5}
Output:
 2,3,4,5,1
Explanation:
 
Since all the elements in array will be shifted 
toward left by one so ‘2’ will now become the 
first index and and ‘1’ which was present at 
first index will be shifted at last.


Example 2:
Input:
 N = 1, array[] = {3}
Output:
 3
Explanation:
Here only element is present and so 
the element at first index will be shifted to 
last index which is also by the way the first index.

*/