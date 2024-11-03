#include <iostream.h>

using namespace std;

void mergeSortedArr(int arr[], int n, int brr[], int m, int crr[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr[i] < brr[j]) {
            crr[k++] = arr[i++];
        } else {
            crr[k++] = brr[j++];
        }
    }
    // Copy remaining elements of arr[], if any
    while (i < n) {
        crr[k++] = arr[i++];
    }
    // Copy remaining elements of brr[], if any
    while (j < m) {
        crr[k++] = brr[j++];
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 4;
    int arr[] = {1, 3, 4, 7};
    int m = 5;
    int brr[] = {0, 2, 6, 8, 9};
    int crr[9];

    mergeSortedArr(arr, n, brr, m, crr);
    print(crr, n + m);

    return 0;
}
