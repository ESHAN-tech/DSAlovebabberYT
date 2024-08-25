#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Function to check if a number is a perfect square using binary search
bool issqrtroot(int n) {
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

// Function to calculate the number of customers eligible for discounts
int getdiscount(int numOfCust, const vector<int>& bills) {
    int discountCount = 0;
    for (int i = 0; i < numOfCust; ++i) {
        if (issqrtroot(bills[i])) {
            discountCount++;
        }
    }
    return discountCount;
}

int main() {
    // taking input number of customer 
    cout<< " enter numcust= ";
    int numOfCust;
    cin >> numOfCust;
    cout<<endl;

    // taking input as number of bills in arr
    cout<<" fill the ele in arr = "<<endl;
    vector<int> bills(numOfCust);
    for (int i = 0; i < numOfCust; ++i) {
        cin >> bills[i];
    }

    //function call
    int discountCount = getdiscount(numOfCust, bills);
    cout << discountCount << endl;

    return 0;
}
