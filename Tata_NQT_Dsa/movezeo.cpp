#include <iostream>
using namespace std;

void movezeroleft(int *arr, int n) {
    int s = 0;
    for (int e = 0; e < n; e++) {
        if (arr[e] != 0) {
            swap(arr[s], arr[e]);
            s++;
        }
    }
}

void movezeroright(int*arr , int n ){
    int e = n-1;
    for (int s =0 ; s<e ; s++){
        if(arr[s]!=0){
            swap(arr[s],arr[e]);
            e--;
        }
        
    }
}

void print(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 7;
    int arr[7] = {4, 5, 0, 19, 0, 5, 0};
    int brr[6]={6,0,1,8,0,2};
    cout<<" case 1st :-"<<endl;
    movezeroleft(arr, n);
    print(arr, n);

    cout<< endl;


    cout<<"case 2nd :- "<<endl;
    movezeroleft(brr, 6);
    print(brr, 6);
    cout<< endl;
    cout<<" move right :- " <<endl;
    cout<< endl;
    cout<<" case 1st :-"<<endl;
    movezeroright(arr, n);
    print(arr, n);

    cout<< endl;


    cout<<"case 2nd :- "<<endl;
    movezeroright(brr, 6);
    print(brr, 6);

    return 0;
}

/*

Problem Description NQT 

A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array arrt of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).
For Example: N=7 and arr = [4,5,0,19,0,5,0]. There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

Input
7-Value of N

Output 4519500
[4,5,0,1,0,0,5]

Element of arr[O] to arr[N-1], While input each element is separated by newline

Input
6-Value of N
Output 618200

[6,0,1,8,0,2] Element of arr[0] to arr[N-1], While input each element is separated by newline

*/

