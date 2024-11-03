#include<iostream>
#include<algorithm>
using namespace std;

void sort012 (int arr[] , int n){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

   for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
    }
// overwriting the new array ..................
   int i = 0;

    // Insert 0s
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }

    // Insert 1s
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }

    // Insert 2s
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }

}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int size = 5;
    int num[]={1,0,2,1,2};
    sort012 (num , size);
    print(num , size);

    return 0;


}