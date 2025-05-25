// Remove Duplicates in-place from Sorted Array
#include <iostream>
using namespace std;

void printarr(int* arr , int size){
    cout<<"{";
    for(int i = 0 ; i< size ; i++){
        cout<<" "<<arr[i]<<" ";
    }
    cout<<"}";
}
/*
explaination of below code:-
so ham starting element arr[k] ko unique maan k chalte so to yaha loop i ka 0 na hokar 1 se sart hoga 
then ham log compare kerte hai (arr[i] != arr[k]) ki phela element jo hai wo apne agee wale k equal to nahi hai na
ager ni hota hai to ham k ko increment (k++) kar k age bad jate hai or ager equal paya jata hai to
*/
int removeDuplicate(int* arr, int size) {
    int k = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }

    return k + 1;
}

int main() {
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};

    int uniqueCount = removeDuplicate(arr, 7);

    cout << "Array after removing duplicates: ";
    printarr(arr, uniqueCount);

    return 0;
}
/*

Problem Statement:-
Given an integer array sorted in non-decreasing order,
remove the duplicates in place such that each unique element appears only once.
The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, 
then the first k elements of the array should hold the final result. 
It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.
Example 1:
Input:
 arr[1,1,2,2,2,3,3]

Output:
 arr[1,2,3,_,_,_,_]


Example 2:
Input:
 arr[1,1,1,2,2,3,3,3,3,4,4]

Output:
 arr[1,2,3,4,_,_,_,_,_,_,_]


*/
