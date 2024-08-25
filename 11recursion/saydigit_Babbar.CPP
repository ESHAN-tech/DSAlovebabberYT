#include <iostream>
#include<string>
using namespace std;

void sayDigitHelper(int d , string arr[]){
    // base condition._._.
    if( d == 0){
        return;
    }
    // processing._._.
    int n = d % 10;
    d = d /10;

    // recursive call._._.
    sayDigitHelper(d,arr);
    cout<<arr[n]<<" ";

}

int main()
{
     string arr[10]={" zero "," one " , " two "  , " three " , " four " , " five " , " six " , 
    " seven " , " eight " , " nine "};

    int n ;
    cout<<"enter a number = ";
    cin>> n;
    // function call 
    sayDigitHelper( n ,arr);
    cout<<endl<<endl;

    

    return 0;
}
