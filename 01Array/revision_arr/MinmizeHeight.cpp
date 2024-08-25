/*
summary of the quetion 

so here we have given
N (num of tower),
arr[](height of each tower),
k:-ye k value hai jo add ya sub hone h tower ki height me to get
a minimize height so yaha ham log max height se min height sub ker k 
new minimize height ko find kerenge or k is max ya min me add ya sub ho ker 
minimize height lane me madat karega.....

example._._._
k=2 , N=4(means array me 4 value (height of tower))
arr[] = { 1 , 5 , 8 , 10}
min = 1 , max = 10 
max - k ---> 10 - 2 = 8
min + k ---> 1 + 2 = 3 

minmize height = 8 - 3 = 5 Ans

example._._._
k=3 , N=5
arr[] = { 3 , 9 , 12 ,16 , 20}
min = 3 , max = 20 
max - k ---> 20 - 3 = 17
min + k ---> 3 + 3 = 6 

minmize height = 17 - 6 = 11 Ans

*/
#include <iostream>
using namespace std;

int getmin(int *arr , int n){
    int min = 9999;
    for(int i = 0 ; i < n ; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;

}
int getmax( int* arr , int n){
    int max = -9999;
    for(int i = 0 ; i < n ; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;

}

int minimizeheight(int * arr , int n , int k){
    int maxl = getmax(arr, n)  - k ;
    int mins = getmin(arr, n)  + k ;

    int result = maxl - mins ;

    return result;
    
}

int main()
{
    int k = 2 ;
    int N = 4 ;
    int arr[4] = { 1 , 5 , 8 , 10};

    cout<<minimizeheight(arr , N , k)<< endl ;
    cout<<endl<<endl;


    int P=3;
    int M=5;
    int brr[5] = { 3 , 9 , 12 ,16 , 20};

    cout<<minimizeheight(brr , M , P)<< endl ;
    cout<<endl<<endl;
    
    

    return 0;
}
