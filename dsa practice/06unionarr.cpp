#include<iostream>
#include <algorithm>
using namespace std ;

void unicorn(int arr[] , int n , int brr[] , int m , int crr[])
{
   int size = n+m;
   int k=0;

    while( k< size)
    
    {
    
        for (int i =0 ; i < n ; i++){
            crr[k++]=arr[i];
        }
        for (int j = 0 ; j < m ; j++){
            crr[k++]=brr[j];
        }

    }

}

void print(int arr[] , int size )

{
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<"\t"; 
    }

}

int main()
{

int n = 3;
int arr[]={1,2,3};

int m = 2;
int brr[]={4,5};

int crr[5];

unicorn(arr , 3 , brr, 2 ,  crr);
print(crr , 5 );
return 0;

   
}
