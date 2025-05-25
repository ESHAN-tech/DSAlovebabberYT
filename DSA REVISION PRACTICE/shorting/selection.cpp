#include <iostream>
using namespace std;

void printarr(int* arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionShort(int* arr , int size)
{
    for(int i = 0 ; i < size - 1 ; i++)
    {
        int minIndex = i;//starting position in first iteration ,yaha i k ek iteration per pure j k loop ka full iteration hoga 
        for(int j = i+1; j<size ; j++)
        {
            // yaha check ker rahe hai starting postion k element ko with all the element of the array and 
            //the condition is when minindex is greater then any index position element then swap  
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    // creating a array on which i apply the selection sort 
    int arr[7]={1,55,23,77,45,8,0};

    selectionShort(arr, 7);
    printarr(arr, 7);
    
    return 0;
}
/*
here we have to replace the shortest and the biggest element...

#What is Selection Sort?
Imagine you have a messy box of colored pencils, and you want to arrange them in order from shortest to tallest. You pick the shortest pencil first and put it at the start. Then you find the next shortest and place it next, and so on. This step-by-step way of sorting is called Selection Sort.

#Steps of Selection Sort:
Start from the first pencil (or number).
Look through all the pencils to find the smallest one.
Swap the smallest pencil with the first one.
Move to the next pencil and repeat until all pencils are sorted.

#Input Array:
arr = [5, 3, 8, 6, 2]
Size: 5

#Dry Run:
Initial Array:
arr = [5, 3, 8, 6, 2]

#1st Iteration (i = 0)
Start: i = 0, minIndex = 0 (value = 5).
Inner Loop: (j runs from 1 to 4)
j = 1: Compare arr[1] (3) with arr[minIndex] (5)
→ 3 < 5 → Update minIndex = 1.
j = 2: Compare arr[2] (8) with arr[minIndex] (3)
→ 8 > 3 → No change.
j = 3: Compare arr[3] (6) with arr[minIndex] (3)
→ 6 > 3 → No change.
j = 4: Compare arr[4] (2) with arr[minIndex] (3)
→ 2 < 3 → Update minIndex = 4.
Swap: Swap arr[0] (5) with arr[minIndex] (2).
→ Array becomes: [2, 3, 8, 6, 5]


#2nd Iteration (i = 1)
Start: i = 1, minIndex = 1 (value = 3).
Inner Loop: (j runs from 2 to 4)
j = 2: Compare arr[2] (8) with arr[minIndex] (3)
→ 8 > 3 → No change.
j = 3: Compare arr[3] (6) with arr[minIndex] (3)
→ 6 > 3 → No change.
j = 4: Compare arr[4] (5) with arr[minIndex] (3)
→ 5 > 3 → No change.
Swap: Swap arr[1] (3) with arr[minIndex] (3).
→ Array remains the same: [2, 3, 8, 6, 5]


#3rd Iteration (i = 2)
Start: i = 2, minIndex = 2 (value = 8).
Inner Loop: (j runs from 3 to 4)
j = 3: Compare arr[3] (6) with arr[minIndex] (8)
→ 6 < 8 → Update minIndex = 3.
j = 4: Compare arr[4] (5) with arr[minIndex] (6)
→ 5 < 6 → Update minIndex = 4.
Swap: Swap arr[2] (8) with arr[minIndex] (5).
→ Array becomes: [2, 3, 5, 6, 8]

*/
