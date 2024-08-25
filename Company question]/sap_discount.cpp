#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool isperfectsquare(int n) {
    if (n < 0) return false; // Negative numbers are not perfect squares
    int s = 0;
    int e = n;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int square = mid * mid;

        if (square == n) {
            return true;
        }
        if (square < n) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return false;
}

int getdiscount(int numcust, const vector<int>& bill) {
    int discountCount = 0;
    for (int i = 0; i < numcust; ++i) {
        if (isperfectsquare(bill[i])) {
            discountCount++;
        }
    }
    return discountCount;
}

int main() {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    cout << endl;

    vector<int> bill(n);
    cout << "Enter the bill amounts: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> bill[i];
    }

    cout << getdiscount(n, bill) << endl;

    return 0;
}
