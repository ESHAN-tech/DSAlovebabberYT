#include <iostream>
#include<algorithm>

using namespace std;

void reversearr(int arr[] ,int n){
    int s=0;
    int e = n-1;

    while( s < e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}

void cyclickrotate(int arr[] , int n , int k){
    for(int i =0 ; i< n ; i++){
        reversearr(arr ,n);
        reversearr(arr ,k-1);
        reversearr(arr ,n-k);
    }
     for(int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
     }
}

void print(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"hello world"<< endl;
    int n = 5;
    int arr[]={1,2,3,4,5};

    reversearr(arr ,n);
    print(arr ,n);
    cout<<endl;
    cyclickrotate(arr , n , 3);
    cout<<endl;
    print(arr ,n);

    return 0;
}
