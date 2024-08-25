#include <iostream>
using namespace std;

int fullParkingLot(int arr[][3] , int row , int col)
{
    int ans= -1 ,  max = -9999;;
    for(int i= 0 ;  i < row ; i++)
    {   
        int count = 0 ;
        for(int j = 0 ; j < col ; j++)
        {
            if(arr[i][j] ==1)
            {
                count++;
            }
             ans = count;
        }
        
        if(max < ans)
        {
            max = ans;
            return row ; 

        }
        
        }
        
  


}

int main()
{
    int row = 3;
    int col = 3;
    
    int arr[3][3]={
    {0,1,0},
    {1,1,0},
    {1,1,1}
    };
    cout<<fullParkingLot( arr,  row ,  col);

    return 0;
}

/*
A parking lot in a mall has RxC number of parking spaces. 
Each parking psace will either be empty(0) or full(1). 
The status (0/1) of a parking space is represented as the element of the matrix. 
The task is to find index of the row(R) in the parking lot that has the most of the parking spaces full(1).
 Note: RxC-Size of the matrix, Elements of the matrix M should be only 0 or 1.

Input

3 -> Value of R(row)
3-> value of C(column) A [010110111] 
-> Elements of the array M[R][C] where each element is separated by new line.

Output 3-> Row 3 has maximum number of 1's



Output 4 -> Row 4 has maximum number of 1's

Input 4-> Value of R(row) 3-> Value of C(column) [010110101111] -> Elements of the array M[R][C
*/
