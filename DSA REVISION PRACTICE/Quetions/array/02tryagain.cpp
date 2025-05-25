#include <iostream>
using namespace std;

void checkSorted(int* arr, int size) {
    int ascending=0;
    int descending=0;

    for(int i = 0;  i< size-1 ; i++){
        if (arr[i] < arr[i+1]) {
            ascending++;
        }
        else{
            descending++;
        }
    }
    //descending zero means phle wale sare element apne agee wale alternative element se chote hai 
     if (ascending > 0 && descending == 0) {
        cout << "The given array is sorted in ascending order." << endl;
    } else if (descending > 0 && ascending == 0) {
        cout << "The given array is sorted in descending order." << endl;
    } else {
        cout << "The given array is not sorted." << endl;
    }
}
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};    // Ascending order
    int brr[5] = {5, 4, 3, 2, 1};    // Descending order
    int crr[5] = {4, 1, 55, 22, 33}; // Unsorted

    cout << "Array: arr = ";
    checkSorted(arr, 5);
    printArray(arr, 5);
   

    cout << "Array: brr = ";
    
    checkSorted(brr, 5);
    printArray(brr, 5);

    cout << "Array: crr = ";
    
    checkSorted(crr, 5);
    printArray(crr, 5);

    return 0;
}