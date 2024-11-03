#include<iostream>
#include<algorithm>
using namespace std;

void movenegative(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while (s < e) {
        while (arr[s] < 0 && s < e) {
            s++;
        }
        while (arr[e] >= 0 && s < e) {
            e--;
        }
        if (s < e) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int size = 8;
    int num[] = { -1, 2, -3, 4, -5, 6, -7, 8 };

    movenegative(num, size); // Uncommented function call
    print(num, size); // Uncommented function call

    return 0;
}
