#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int getMax(int arr[], int n) {
        int max = -99;
        for (int i = 0; i < n; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }

    int getMin(int arr[], int n) {
        int min = 9999;
        for (int i = 0; i < n; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        return min;
    }
};

int main() {
    Solution s1;

    int num[5] = {1, 2, 3, 4, 5};

    cout << "Max element of array is: " << s1.getMax(num, 5) << endl;

    cout << "Min element of array is: " << s1.getMin(num, 5) << endl;

    return 0;
}
