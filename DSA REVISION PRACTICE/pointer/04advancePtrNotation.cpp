#include <iostream>
using namespace std;
void notation(){
    int nums[2][3]={{16 , 18 ,20} , {25 , 26 , 27}};

    cout<<"*(*nums) = "<<*(*nums)<<endl;
    cout<<"*(*nums + 1) = "<<*(*nums + 1)<<endl;
    cout<<"*(*nums + 2) = "<<*(*nums + 2)<<endl;

    cout<<"*(*(nums + 1)) ="<<*(*(nums + 1))<<endl;
    cout<<"*(*(nums + 1)+1) ="<<*(*(nums + 1))<<endl;
    cout<<"*(*(nums + 1)+2) ="<<*(*(nums + 1))<<endl;

} 

void print(){
    int arr[4]={0 ,1 ,2 ,3};

    int *ptr ;
    ptr = arr;

    for (int i =0 ; i < 4 ; i++){
        cout<<"element of array = "<<*ptr<<endl;
        ptr++;
    }
}

void print2D(){
   int nums[2][3]={{16 , 18 ,20} , {25 , 26 , 27}};
   int* ptr;
   ptr = &nums[0][0];

   for(int i = 0 ; i < 2; i++){
    for(int j = 0 ; j < 3; j++)
    {
        //cout<<"2D array element = "<<*ptr <<endl;
        cout<<"2D array element = "<<*(ptr+i*3+j)<<endl;
    }
   }
}

int main()
{
    
    notation();
    cout<<endl<<endl;

    print();
    cout<<endl<< endl;

    print2D();
    return 0;
}
/*Special type of data which can point any data type 
they are coomon 
their data type is not predefined  

WHY WE USE  void pointer 
1. Generic function 
2.Low lwevel memory operation 
3.
 */
