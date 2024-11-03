#include<iostream>
using namespace std ;

int maxarray(int *arr , int n ){
    int max=-9999;
    //using drake force method 
    for (int i=0 ; i<n ; i++){
        if (arr[i] > max);
        max=arr[i];
               
    }
    return max ;
}

int minarray(int *arr , int n ){
    int min = 9999;
    //using drake force method 
    for (int i=0 ; i<n ; i++){
        if (min > arr[i]);
        min=arr[i];
               
    }
    return min ;
}
void printarr(int arr[], int n )
{
    for(int i =0 ; i < n ; i++){
        cout << arr[i]<<" ";
    }cout<< endl;
}
int main (){
    int num [5]= { 1 , 2 , 5 , 9 ,75 } ;
    int size = 5;


    // calling function 

    cout<<maxarray(num , 5 );
    cout<<endl ;

    cout<<"this is my array = ";
    printarr(num , 5);
   

    cout <<minarray(num , 5 );
    cout<<endl ;

     return 0 ;


}