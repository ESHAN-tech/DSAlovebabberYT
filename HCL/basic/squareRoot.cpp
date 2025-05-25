#include <iostream>
using namespace std;

void checkPerfectNumber(int n)
{
    int sum = 0;
    // Finding proper divisors (excluding the number itself)
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0){
            sum = sum + i;
        }
    }

    if(sum == n){
        cout << n << " is a Perfect Number." << endl;
    }
    else{
        cout << n << " is NOT a Perfect Number." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number :- ";
    cin >> n;

    checkPerfectNumber(n);

    return 0;
}
