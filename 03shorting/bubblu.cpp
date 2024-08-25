#include <iostream>
#include <algorithm>
using namespace std;

void bubbleShort(int arr[] , int n){
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j <n-1 ; j++){
            if(arr[j] > arr[j+1]){//campare agl bgl ele
                swap(arr[j] , arr[j+1]);// ager j last index per hoga to j+1 to array k bhar chala jayega  
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

