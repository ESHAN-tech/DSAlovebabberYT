#include <iostream>
using namespace std;

int squareroot ( int k) {

    int s =0;
    int e = k-1;
    long long int mid = s + (e - s)/2;
    //int ans = -1;

    while (s <= e){
        int square = mid * mid;

        if(square == k)

        {
           return mid;
        }

        else if(k > square)

        {
            //ans = mid ;
            s = mid + 1;
        }

        else
        {
            e = mid -1;
        }

        mid = s + (e - s)/2;
    }
} 

int main()
{
    int k = 25 ;
    cout << squareroot (k);
    cout << endl; 

    int l = 144 ;
    cout << squareroot (l);
    cout << endl; 
    
    int m = 169 ;
    cout << squareroot (m);
    cout << endl; 
    

    
    return 0;
}
