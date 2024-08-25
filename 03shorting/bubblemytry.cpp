#include <iostream>
#include<algorithm>
using namespace std;

void bubbleShort(int arr[] , int n){
    for (int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]>arr[j]){
                swap(arr[i] ,arr[j] );
            }
        }
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
    bubbleShort(arr, n);
    print(arr, n);
    return 0;
}
