#include <iostream>
#include<algorithm>
using namespace std;

/*

input(without wave print):-       output(wave print):-
1 2 3                              1 4 7
4 5 6                              8 5 2
7 8 9                              3 6 9

how we solve
* col ka (j)loop simple chalega zero se...
* row ka (j)loop do conditions(1 & 2) me chalega...
* condition (1):- if col is odd then bottom to top loop will work
* condition (1):-(i = row ; i>= 0 ; i--)
* condition (2):-if col is even then top to bottom loop will work
* condition (3):-(i = 0 ; i<row ; i++)

*/

void waveprint(int arr[][3] , int row , int col){

    for (int j = 0 ; j < col ; j++){
        // if col is odd
        if((j % 2)!= 0 ){
            // bottom to top loop
            for(int i = row-1 ; i >=0 ; i--){
                cout << arr[i][j]<<" ";
            }
            cout<<endl ;
        }
        else{
            //top to bottom loop
            for(int i = 0 ; i < row ; i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
}

int main()

{
    int row = 3;
    int col = 3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    waveprint(arr , row , col);
    cout<< endl ;
    return 0;
}
