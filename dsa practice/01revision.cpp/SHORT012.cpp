#include<iostream>
using namespace std;

void short012 (int arr[] , int size ){
    // step 1 : intialize the count of 0 , 1 , 3 with zero ...
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    // step 2 : finding the count of 0 , 1 ,2 

    for(int  i = 0 ; i  <  size ; i++){
        if(arr[i]== 0){
            count0++;
        }
        else if (arr[i] == 1){
            count1++;
        }
        else if (arr[i] == 2){
            count2++;
        }
        
    }

    // inserting the element in array and forming the new array 
    int j = 0 ;
    while(count0 > 0){
        arr[j++] = 0 ;
        count0--;
    }

    while(count1 > 0){
        arr[j++] = 1 ;
        count1--;
    }

    while(count2 > 0){
        arr[j++] = 2 ;
        count2--;
    }

}

void print(int arr[] ,  int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int num[5]={0,1,2,0,2};
    short012 (num , 5);
    print(num , 5);

    return 0 ;

}


   