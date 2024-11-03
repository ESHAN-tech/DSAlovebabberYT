// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std ;

void intersection(int arr[], int n, int brr[], int m, int crr[], int &l) {
    l = 0; // Initialize the index for crr
    for (int i = 0; i < n; i++) {
        int ans = arr[i];
        for (int j = 0; j < m; j++) {
            if (ans == brr[j]) {
                crr[l++] = ans;
                break; // Stop checking further once a match is found
            }
        }
    }
}
void print (int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{   
    int n = 3;
    int arr[]={1,2,3};
    
    int m = 2;
    int brr[]={2,3};
    int crr[5];
    int l; // Size of the intersection array

    intersection(arr, n, brr, m, crr, l);
    print(crr, l);

    return 0;
    

}