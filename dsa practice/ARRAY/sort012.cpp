#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

//here we short 0,1,2 
//logic here we rewrite array element
//here in this quetion element conatain an element which are 0 ,1 ,2
//we just need to short them._._._._

void short012 (int arr[] , int n){
    int count0 =0;
    int count1 =0;
    int count2 =0;
   for(int i = 0 ; i < n ; i++){
    if (arr[i]==0){
        count0++;
    }
    else if(arr[i]==1){
        count1++;
    }
    else {
        count2++;
    }
   }

   // overwrite the function_(._.)_(._.)_(._.)_
   int i=0;
   while(count0>0){
    arr[i++]=0;
    count0--;
   }
   while(count1>0){
    arr[i++]=1;
    count1--;
   }
   while(count2>0){
    arr[i++]=2;
    count2--;
   }
   cout<<" hello";
}

void print(int arr[] , int size){
    for(int i = 0 ;  i<size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={0,1,2,2,1};
    short012 (arr , 5);
    print(arr , 5);

    return 0;
}



