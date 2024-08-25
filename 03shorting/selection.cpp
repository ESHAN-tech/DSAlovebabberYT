#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;//leting the first index var as min ele ...
        for (int j = i + 1; j < n; j++) { // Start from i + 1
            if (arr[j] < arr[minIndex]) { // Find the minimum element in the unsorted part
                minIndex = j;
            }
        }
            swap(arr[minIndex], arr[i]);
        
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int arr[] = {1, 7, 9, 2, 3, 0};
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}
