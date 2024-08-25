#include <iostream>
#include <string>
using namespace std;

void numDigitProduct(const string &N) {
    int ans = 1;
    for (int i = 0; i < N.length(); ++i) {
        char c = N[i];
        if (isdigit(c)) { // Check if the character is a digit
            int d = c - '0'; // Convert char to int
            ans *= d;
        }
    }
    cout << "answer = " << ans << endl;
}

int main() {
    string n = "5244";
    numDigitProduct(n);
    return 0;
}
