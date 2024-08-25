#include<iostream>
#include<algorithm>
using namespace std;

// 2d array seems like a matrix but it is in the 1D array form in the memory---


int main()
{     
    //creating the 2D array...
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // to print the 2D array 2 loops where used for that...
    for (int i = 0 ;  i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing the 2D array by taking the input from the user 

    cout<<"here we take input as a row wise = "<< endl;
    

    int brr[2][2];

    for (int i = 0 ;  i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {   
            cout<<"enter the element at index [" <<i<< "]["<<j<<"] :-";
            cin>>brr[i][j];
        }
        
    }

    cout <<" array formed after the input ="<<endl;
    for (int i = 0 ;  i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {   
            cout << brr[i][j]<<"  ";        
        }
        cout<<endl ; 
        
    }
    
    cout<<endl ;

    cout<<"here we take input as column wise = "<<endl; 

    
    int crr[2][2];

    
    for(int j = 0 ; j < 2 ; j++)
    {
        for (int i = 0 ;  i < 2 ; i++)
        { 
            cout<<"enter the element at index [" <<i<< "]["<<j<<"] :-";
            cin>>crr[i][j];
        }
        
    }
    
    cout <<" array formed after the input ="<<endl;
    for (int i = 0 ;  i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {   
            cout << crr[i][j] <<"  ";       
        }
        cout<<endl ; 
        
    }
    
    cout<<endl ;


    return 0;
}
