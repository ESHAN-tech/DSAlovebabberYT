#include<iostream>
#include<algorithm>
using namespace std; 

int kthmin (int arr[] , int n , int k){
    sort(arr , arr+n);// here header file algorithm works 
    return arr[k-1];
}

int main()
{
int n = 6;
int arr[] = {7 , 10 , 4 , 3 , 20 , 15};
int k = 3;
cout <<kthmin (arr , n , k);
cout<<endl;

return 0;

}