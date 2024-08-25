#include <iostream>
using namespace std;
//search pace :- space where is answer is present
int getsqrtroot(int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e) {
        // checking a sqrt condition...
        int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square<n){
            // ans = mid;
            s = mid + 1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number for sqrt-root=";
    cin>>n;
    cout<<endl;
    cout<<getsqrtroot(n)<<endl;
    
    
    return 0;
}
