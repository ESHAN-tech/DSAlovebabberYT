#include <iostream>
#define INT_MIN -9999
using namespace std;
int secondLargest(int* arr, int size) {
    int largest = INT_MIN;    
    int secondLargest = INT_MIN; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  
            largest = arr[i];         
        }
    }
    return secondLargest; 
}
int main() {
    int arr[7] = {12, 20, 31, 34, 15,7,8}; 

    int result = secondLargest(arr, 7);

    cout << "Second largest element = " << result << endl;

    return 0;
}
