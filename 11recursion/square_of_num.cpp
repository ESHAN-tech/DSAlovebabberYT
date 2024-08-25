#include <iostream>
using namespace std;
// this code is for 2 power means if we give number then it 
//becomes the power of 2 ._._.
// Function to calculate power of 2 using recursion
int power_of_2(int exponent) {
    // Base case: any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: 2 multiplied by the power of 2 with (exponent - 1)
    return 2 * power_of_2(exponent - 1);
}

int main() {
    int exponent;
    
    // Taking the exponent as input
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Function call
    int result = power_of_2(exponent);

    // Display the result
    cout << "2 raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
