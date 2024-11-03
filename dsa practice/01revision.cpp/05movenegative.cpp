#include<iostream>
#include<algorithm>
using namespace std ;

void movenegative(int arr[] , int size){
    int s= 0 ;
    int e= size-1;

    for (int i = 0 ;  i <  size ; i++){
        while (arr[s]<0 && s < e){
            s++;
        }
        while (arr[e]>=0 && s < e){
            e--;
        }
        // if left part is +ve and right part is -ve then  swap 
         while (s < e ){
            if(arr[s]> arr[e])
            {
                swap(arr[s] , arr[e]);
                s++;
                e--;
            }
        }
    }
}  

void print(int arr[] , int size ){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i]<<"\t";
    }
}

int main(){
    int size = 8;
    int num []={ -1 , 2 , -3 , 4 , -5 , 6 , -7 , 8 };

   // movenegative(num , size);

    //print(num , size);
    cout << "hello world";

    return 0;
}
