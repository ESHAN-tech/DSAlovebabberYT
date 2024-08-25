#include <iostream>
#include<algorithm>

using namespace std;

int binarysearch(int arr[] , int s , int e , int key){
    int mid = s + (s-e)/2;
    while ( s<=e){
    if (key > arr[mid]){
        return mid;
    }
    else if( key > arr[mid]){
        s=mid+1;
    }
    else{
        e = mid-1;
    }
    }
    return -1;
}

int pivotele (int arr[] , int n){
    int s = 0;
    int e = n-1;
    int mid = s+(s-e)/2;
    int ans = -1 ;
    // here we find the element where max & min occur after the rotation 
    while ( s < e ){
    if(arr[0] < arr[mid]){
    // means lies in the upper line 
    ans = mid ;
    s=mid+1;
    
    }
    else {
        e = mid;
    }

    }
    return ans;
}
// /in rotated array seaching can either possible before the pivot element array or possible 
// after the pivot array element

int findposition (int arr[]  , int n  , int key){
    // searching in the part  1 
    int pivot = pivotele (arr ,n);

    if (key >= arr[pivot] && key < arr[n-1]){
        return binarysearch(arr, pivot, n - 1, key);
    }
    else{
        return binarysearch(arr,0, pivot-1, key);;
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