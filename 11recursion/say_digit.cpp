#include <iostream>
using namespace std;

void sayDigitHelper(int n) {
    // Base case._._.
    if (n == 0) {
        return;
    }
    // processing._._.
    int digit = n % 10;
    n = n / 10;

    //Recursively call._._. 
    sayDigitHelper(n);
                                                          _____   _____
    //Print the corresponding word for the current digit_(. _ .)_(. _ .)_

    switch(digit)
     {
        case 0: cout << "zero "; 
        break;

        case 1: cout << "one ";
        break;

        case 2: cout << "two ";
        break;

        case 3: cout << "three ";
        break;

        case 4: cout << "four ";
        break;

        case 5: cout << "five ";
        break;

        case 6: cout << "six "; 
        break;

        case 7: cout << "seven "; 
        break;

        case 8: cout << "eight "; 
        break;

        case 9: cout << "nine ";
         break;
    }
}

void SayDigit(int n) {
    if (n == 0) {
        cout << " zero ";
        return;
    }
    if (n < 0) {
        cout << " minus ";
        n = -n;
    }
    sayDigitHelper(n);
}

int main() {
    int n;
    cout << "Enter the digit: ";
    cin >> n;
    SayDigit(n);
    return 0;
}
