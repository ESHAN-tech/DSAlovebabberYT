#include <iostream>

using namespace std;

int mountelement (int arr[] , int n ){
    // its a kind of max elemet off 
    // basic part ....
    int  s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;

    while(s < e){
        // case 1 :- check for the increasing line 
        if(arr[mid]< arr[mid+1]){
            // means lies in the increasing line ...
            s=mid+1;
        }
        else{
            // moutain element can be mid or in decreasing line
            e=mid;//mid -1 karenge to wo increase line me chala jayega but here we check for mid and decreasing line

        }
        mid = s + (e - s )/ 2;
    }
    return s;
}

int main()

{
    int n = 4;
    int arr[]={3,4,5,1};
    cout<<mountelement (arr ,n );
    cout<<endl;

    return 0;
}
