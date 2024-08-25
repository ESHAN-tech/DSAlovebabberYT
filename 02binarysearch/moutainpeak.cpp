#include <iostream>
using namespace std;

int mountainPeak(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int  mid = s + (e - s) / 2;

    while (s < e) {
      

        if (arr[mid] < arr[mid + 1]) {
            // lies in increasing part of the array ....
            // jab tak uppar wale condition true hoge tab tak s increment hogaa...
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;

    }

    return s;
}

int main() {
    int size = 4;
    int arr[] = {3, 4, 5, 1};

    cout << "Peak element of the mountain array is at index: " << mountainPeak(arr, size) << endl;

    return 0;
}
