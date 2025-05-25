#include <iostream>
using namespace std;

int fibonacci(int n) {
    // base case
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cout << "Enter how many terms you want in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
