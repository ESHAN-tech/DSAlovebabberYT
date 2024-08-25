#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

int main() {
    int n = 5;
    cout << "n before = " << n << endl;
    cout << "Address returned by fun() = " << fun(n) << endl; 
    return 0;
}
