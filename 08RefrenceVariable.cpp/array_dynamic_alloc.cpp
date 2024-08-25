#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

    // Variable using heap memory._._.
    char* ch = new char[10]; // Allocate memory for 10 characters
    cout << "Size of ch pointer: " << sizeof(ch) << " bytes" << endl;

//dynamic allocation of the array._._.

   int u;
   cout<< "enter the size of arrya = "<<endl;
   cin>> u;

   int *arr = new int[u];

   cout<<" enter the element in array = "<<endl;
   for(int i = 0 ; i < u ; i++){

    cout<<"element at index ["<<i<<"]"<<endl;
    cin>>arr[i];
    
   }
   cout<<endl;



    for(int i = 0 ; i < u ; i++){
        cout<<arr[i]<<" ";
   }

    return 0;
}
