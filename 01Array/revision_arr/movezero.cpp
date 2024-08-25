#include <iostream>
#include <algorithm>

using namespace std;

void movezero(int * arr , int size ){
    // Here again we use the two-pointer approach 
    // s = pointing ---> intial/start
    // e = pointing ---> current...
    int s = 0;
    for (int e = 0; e < size; e++) {
        if (arr[e] != 0) {
            swap(arr[s], arr[e]);
            s++;
        }
    }
}

void moveleft(int * arr , int n){
    int e = n;
    for (int s = n ; s >= 0 ; s--){
        if(arr[s]!=0){
            swap(arr[s] , arr[e]);
            e--;
        }
    }

}

void print(int * arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int n = 7;
    int arr[7] = {1, 3, 0, 5, 0, 9, 0};

    movezero(arr, n);
    print(arr, n);
    cout<<endl<<endl;

    moveleft(arr, n);
    print(arr, n);

    return 0;
    
}



/*

DRY RUN 
1.First Iteration (e = 0):
Condition: arr[0] is 1 (non-zero).
Action: Swap arr[0] with arr[0] (no change).
Array State: arr = {1, 3, 0, 5, 0, 9, 0}
Increment s: s = 1


2.Second Iteration (e = 1):
Condition: arr[1] is 3 (non-zero).
Action: Swap arr[1] with arr[1] (no change).
Array State: arr = {1, 3, 0, 5, 0, 9, 0}
Increment s: s = 2


3.Third Iteration (e = 2):
Condition: arr[2] is 0 (zero).
Action: No swap; s remains the same.
Array State: arr = {1, 3, 0, 5, 0, 9, 0}
Pointer s remains: s = 2


4.Fourth Iteration (e = 3):
Condition: arr[3] is 5 (non-zero).
Action: Swap arr[2] with arr[3].
Array State: arr = {1, 3, 5, 0, 0, 9, 0}
Increment s: s = 3


5.Fifth Iteration (e = 4):
Condition: arr[4] is 0 (zero).
Action: No swap; s remains the same.
Array State: arr = {1, 3, 5, 0, 0, 9, 0}
Pointer s remains: s = 3


6.Sixth Iteration (e = 5):
Condition: arr[5] is 9 (non-zero).
Action: Swap arr[3] with arr[5].
Array State: arr = {1, 3, 5, 9, 0, 0, 0}
Increment s: s = 4


7. Seventh Iteration (e = 6):
Condition: arr[6] is 0 (zero).
Action: No swap; s remains the same.
Array State: arr = {1, 3, 5, 9, 0, 0, 0}
Pointer s remains: s = 4


Final State:
The final array is arr = {1, 3, 5, 9, 0, 0, 0}.
All non-zero elements have been moved to the left, and all zeros are moved to the right.
The order of the non-zero elements is preserved.


*/
