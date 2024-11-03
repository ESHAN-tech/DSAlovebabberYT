#include<iostream>
using namespace std ;

void unionarray(int a[] , int n , int b[] , int m){
    int *c = {0};
    int size = n+m;

    for (int k = 0 ; k<size ; k++)
    {
      
      
        for (int i = 0 ; i<n ; i++)
        {
            c[k] = a[i];
           
        }
        for (int j = 0 ; j<n ; j++)
        {
            c[k] = b[j];
           
        }


    }

    for (int k = 0 ; k<size ; k++){
       cout<<c[k]<<" ";
    }

}

int main(){

    int a[3]={1,2,3};

    int b[2]={4,5};

    unionarray(a , 3 , b , 2);

    return 0;


}