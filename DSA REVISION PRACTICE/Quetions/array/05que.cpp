//Move all Zeros to the end of the array
#include <iostream>
using namespace std;

void print( int* arr , int size){
    for(int i=0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

// here i am trying the two pointer approch with while loop
void movezero(int* arr , int size){
    int s = 0;
    int e = size-1;
     while (s < e) {
        if (arr[s] != 0) {
            s++; // Move the start pointer forward if non-zero
        } else if (arr[e] == 0) {
            e--; // Move the end pointer backward if zero
        } else {
            swap(arr[s], arr[e]); // Swap if arr[s] is 0 and arr[e] is non-zero
            s++;
            e--;
        }
    }
}
int main()
{
    int arr[8]={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    movezero(arr, 8);
    print(arr, 8);

    return 0;
}
/*

Here we have to move all the zeros without affecting the actual order of the  array

Example 1:
Input:
 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output:
 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation:
 All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input:
 1,2,0,1,0,4,0
Output:
 1,2,1,4,0,0,0
Explanation:
 All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
*/