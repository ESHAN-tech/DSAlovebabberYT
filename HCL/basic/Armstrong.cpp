#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num){
    int count=0;
    int temp = num;
    while(num >0){
        count++;
        int d = num %10;
        num = num/10;
    }
    return count;
}

void CheckArmstrongNumber(int n){
    int ans = n;
    int power = countDigit(n);//int result = pow(base, exponent);

    int sum = 0;
    while(n > 0){
        int d = n % 10;
        sum = sum + pow(d , power);
        n=n/10;
    }

    if(sum == ans){
        cout << ans << " is an Armstrong number." << endl;
    }
    else{
        cout << ans << " is NOT an Armstrong number." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number to check Armstrong = ";
    cin >> n;

    CheckArmstrongNumber(n);
    
    
    
    return 0;
}
/*
Number | Check | Result
370 | 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 | Armstrong
371 | 3³ + 7³ + 1³ = 27 + 343 + 1 = 371 | Armstrong
407 | 4³ + 0³ + 7³ = 64 + 0 + 343 = 407 | Armstrong
1⁴ + 6⁴ + 3⁴ + 4⁴ = 1 + 1296 + 81 + 256 = 1634 ✅
*/