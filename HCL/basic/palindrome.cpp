#include <iostream>
using namespace std;

void CheckPalindrome(int num){
    int rev = 0;
    int ans = num;
    while(num > 0){
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }

    if( ans == rev){
        cout<<"Input number "<< ans << " is palindrome ";
    }
    else{
        cout<<"Input number "<< ans << " is not palindrome ";
    }
}

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    CheckPalindrome(n);

    return 0;
}
