#include<iostream>
#include<algorithm>
using namespace std;

// printing a row wise sum 
// 1,2,3=6
// 4,5,6=15
// 7,8,9=24

void PrintRowSum(int arr[][3] , int row , int col )
{
    int ans = -1 ;
    for(int i =0 ; i < row ; i++){
        int sum =0;
        for(int j = 0 ; j < col ; j++)
        {
            sum = sum + arr[i][j];

            ans = sum ;
            
        }
        cout<< " sum of "<< i <<" row is ="  << ans;
        cout<<endl; 

    }
}

// printing a row wise sum
// 1,4,7=12
// 2,5,8=15
// 3,6,9= 18


void PrintColSum(int arr[][3] , int row , int col )
{
    int ans = -1 ;
    for(int j =0 ; j < col; j++){
        int sum =0;
        for(int i = 0 ; i < col ; i++)
        {
            sum = sum + arr[i][j];

            ans = sum ;
            
        }
        cout<< " sum of "<< j <<" col is ="  << ans;
        cout<<endl; 

    }
}
// max_row_sum
// 1,2,3=6
// 4,5,6=15
// 7,8,9=24
// 24>15>6 ... ans = 24;

void largestRowSum(int arr[][3] , int row , int col ){
   int ans = -1 ;
   int max = -9999;
    for(int i =0 ; i < row ; i++){
        int sum =0;
        for(int j = 0 ; j < col ; j++)
        {
            sum = sum + arr[i][j];

            ans = sum ;
            
        }
    }

    if (ans > max){
            max = ans ;
        }
        cout<< "  max row sum is = "  << max;
        cout<<endl; 
}

// printing a row wise sum
// 1,4,7=12
// 2,5,8=15
// 3,6,9= 18
// 18>15>12... ans = 18

void largestColSum(int arr[][3] , int row , int col )
{
    int ans = -1 ;
    int max = -9999;
    for(int j =0 ; j < col; j++){
        int sum =0;
        for(int i = 0 ; i < col ; i++)
        {
            sum = sum + arr[i][j];

            ans = sum ;
            
        }


    }

    if (ans > max){
        max = ans ;
    }
        cout<< "  max col sum is = "  << max;
        cout<<endl; 
}


int main()
{
    int row = 3 ;
    int col = 3 ;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    PrintRowSum(arr ,  row , col );
    cout<< endl;
    PrintColSum(arr ,  row , col );
    cout<< endl;
    largestRowSum(arr ,  row , col );
    cout<<endl;
    largestColSum(arr ,  row , col );
    cout<<endl;

    return 0;
}
