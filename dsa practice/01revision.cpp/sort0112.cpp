#include<iostream>
#include<algorithm>

using namespace std;

void sort012(int arr[] ,  int n){
// step 1 :- intialize count of 0 ,1,2 with zero...
int count0 = 0 , count1 = 0 , count2 = 0 ;

// step 2:- find the ocurance of 0, 1 , 2...........
 for (int i = 0 ; i < n ; i++){
    if (arr[i]== 0){
        count0++;
    }
    else if (arr[i] == 1){
        count1++;
    }
    else {
        count2++;
    }
 }

// step 3 :-  forming the new array wich is in the sorted order 
int j = 0 ;

while(count0 > 0){
    arr[j++]=0;
    count0--;
}
while(count1 > 0){
    arr[j++]=1;
    count1--;
}
while(count2 > 0 ){
    arr[j++]=2;
    count2--;
}

}

void print (int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int n = 5;
    int num[]={0 ,1 ,2 ,1,0};

   
    sort012( num , n);
    print( num , n);

    return 0;

    
}