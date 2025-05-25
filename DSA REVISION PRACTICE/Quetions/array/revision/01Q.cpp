//Find a second smallest number in the array 
#include <iostream>
# define INT_MIN -9999
using namespace std;

int secondsmallest(int* arr , int size){
    int max = INT_MIN;
    int secondmax=INT_MIN;
    for(int i = 0 ; i<size ; i++){
        //bas simple big element ka logic lik or max ka prev store kerte chal last max k prev me to apne ap he 2nd max a jayega 
        if(max<arr[i]){
            secondmax=max;
            max = arr[i];
        }
    }
    return secondmax;
}

int main()
{
    int arr[6]={1,12,3,24,10,9};
    // problem:- replace 24 with 4 the o/p is coming 1 which is wrong

    int result=secondsmallest(arr, 6);

    cout<<"second max in the array = "<<result<<endl;

    return 0;
}
