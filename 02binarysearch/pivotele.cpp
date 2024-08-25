#include <iostream>
using namespace std;

int getPivotElement(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[0] <= arr[mid]) {
            // Means lies in the upper line
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main() {
    int size = 5;
    int arr[] = {7, 9, 1, 2, 3};
    cout << "Pivot element is at index: " << getPivotElement(arr, size) << endl;
    return 0;
}
