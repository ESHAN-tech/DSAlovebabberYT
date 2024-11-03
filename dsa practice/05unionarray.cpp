#include<iostream>
using namespace std;

void unionarray(int a[], int n, int b[], int m) {
    // yaha ham is question me just print karenge array k element ko ki hame output me union mille

    int i = 0, j = 0; // yaha hamne do pointer liya 

    while (i < n && j < m) {

        // case 1: ager dono array k element equal hua to array ko print or dono pointer ko increment 
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        }
        else {
            cout << b[j] << " ";
            j++;
        }
    }

    // uper wale loop me to print ker diya ham logo ne but in case ager koi element ager left ho jata hai to use liye
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    while (j < m) {
        cout << b[j] << " ";
        j++;
    }

    cout << endl;
}

void intersectionarray(int a[], int n, int b[], int m) {
    // yaha ham is question me just print karenge array k element ko ki hame output me union mille

    int i = 0, j = 0; // yaha hamne do pointer liya 

    while (i < n && j < m) {

        // case 1: ager dono array k element equal huai to array ko print or dono pointer ko increment 
        if (a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else {
            // Increment the pointer of the array having the smaller element
            if (a[i] < b[j])
                i++;
            else
                j++;
        }
    }
}

int main() {
    int a[3] = {1, 2, 3};
    int b[2] = {4, 5};
    int c[3] = {2, 3, 4};

    cout<<"union of array is ="
    unionarray(a, 3, b, 2);
    cout << endl;
    cout<<"intersection of array is"
    intersectionarray(a, 3, c, 3);

    return 0;
}
