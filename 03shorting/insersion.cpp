#include <iostream>
#include<algorithm>
using namespace std;

/*
main logic :- yaha j ka loop ulta chal raha h like un element ko lega jo phle
hand me a rahe hai or unsee i k loop ko comapare apne me ager i ka element chota hua
to wo left jayega else it will ignore means right part me jayega

*/
void insersion(int arr[] , int n ){
    //assuming the first element as a shorted element ...
    for (int i = 0 ; i < n ; i++){
        int temp = arr[i];
        int j = i-1 ;
        for( ; j>=0 ; j--){
            if(arr[j] > temp ){
                // shift like 10 > 7 then has to shift one step
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            // if element is smaller then it will goes to the left part 

            //arr[ j + 1 ] = temp ;

        }
        arr[ j + 1 ] = temp ;
    }
}

void print(int arr[]  , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<<" ";
    }
}

int main()
{
    int size = 7;
    int arr []={10,1,7,4,8,2,11} ;

    cout<<" arry before sort = ";
    print(arr , size );
    cout<< endl;

    insersion(arr , size );

    cout<<" array after short = ";
    print(arr , size );
    cout<< endl;

    return 0;
}
