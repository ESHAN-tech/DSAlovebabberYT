#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int key) {
    // Binary search in a given range [s, e]
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (key > arr[mid]) {
            // Search in the right part
            s = mid + 1;
        }
        else {
            // Search in the left part
            e = mid - 1;
        }
    }
    return -1;
}

int pivotele(int arr[], int n) {
    // Find the index of the minimum element (pivot)
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while (s < e) 
    {
        if (arr[mid] >= arr[0])
        {
            // Means lies in the upper part
            s = mid + 1;
        }
        else 
        {
            // Lies in the lower part
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int findposition(int arr[], int n, int key) {
    int pivot = pivotele(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        // Search in the right part(2nd line / lower line)
        return binarysearch(arr, pivot, n - 1, key);
    }
    else {
        // Search in the left part (1st line / upper line)
        return binarysearch(arr, 0, pivot - 1, key);
    }
}


int main() {
    int n = 5;
    int arr[] = {7, 9, 1, 2, 3};
    int key = 9;

    cout << "Pivot element index: " << pivotele(arr, n) << endl;
    int position = findposition(arr, n, key);
    if (position != -1) {
        cout << "Element " << key << " found at index: " << position << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}
