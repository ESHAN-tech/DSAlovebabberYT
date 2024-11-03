#include <iostream>
using namespace std;

void sort012(int arr[], int size) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count the occurrences of each element
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
    }

    // Reconstruct the array using the counts
    int i = 0;

    // Insert 0s
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }

    // Insert 1s
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }

    // Insert 2s
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int num[6] = {0, 2, 1, 1, 2, 0};

    sort012(num, 6);
    print(num, 6);

    return 0;
}
