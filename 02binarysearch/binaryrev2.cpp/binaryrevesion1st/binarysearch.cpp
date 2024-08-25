#include<iostream>
using namespace std;

int firstoccr(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (key == arr[mid]) {
            ans = mid;
            e = mid - 1;  // Move to the left half
        } else if (key > arr[mid]) {
            s = mid + 1;  // Move to the right half
        } else {
            e = mid - 1;  // Move to the left half
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccr(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (key == arr[mid]) {
            ans = mid;
            s = mid + 1;  // Move to the right half
        } else if (key > arr[mid]) {
            s = mid + 1;  // Move to the right half
        } else {
            e = mid - 1;  // Move to the left half
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int totaloccr(int arr[] , int n , int key){
    int fo=firstoccr(arr, n, key);
    int lo=lastoccr(arr, n, key);
    
    if (fo == -1 || lo == -1) {
        return 0;
    }

    int to = lo - fo + 1;

    return to;

}

int main() {
    int n = 8;
    int key = 2;
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};

    cout << "First occurrence = " << firstoccr(arr, n, key) << endl;
    cout << "Last occurrence = " << lastoccr(arr, n, key)<< endl;
    cout << " total occurrence of key ="<<totaloccr(arr, n, key)<<endl;

    return 0;
}
