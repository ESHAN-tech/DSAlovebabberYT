#include<iostream>
#include<algorithm>
using namespace std;

void unioarr(int arr[], int n, int brr[], int m, int crr[]) {
    int k = 0;

    for (int i = 0; i < n; i++) {
        crr[k++] = arr[i];
    }
    for (int j = 0; j < m; j++) {
        crr[k++] = brr[j];
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int arr[3] = {1, 2, 3};
    int brr[2] = {4, 5};
    int crr[5]; // Correct size for the union array

    unioarr(arr, 3, brr, 2, crr); // Pass crr to unioarr

    print(crr, 5); // Print the union array

    return 0;
}