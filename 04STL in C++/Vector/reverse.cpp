#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int>& arr) {
    // Use two pointer approach
    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArr(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArr(arr);
    printArr(arr);
    return 0;
}
