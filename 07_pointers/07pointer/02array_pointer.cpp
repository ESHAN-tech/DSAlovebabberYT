#include <iostream>
#include<string>
using namespace std;

int main()
{
   cout<<" array with pointer ";

   int arr[10]={11,3,5,7,9};

    cout<<"arr = "<<arr<<endl; //name of array gives it's address...
    cout<<"*arr = "<<*arr<<endl; //gives intial value of address ...
    cout<<"&arr[0] = "<< &arr[0] << endl;
    cout<<"&arr[1] = "<< &arr[1] << endl;
    cout<<"&arr[2] = "<< &arr[2] << endl;

   cout<<"Now printing here respective value ="<< endl;

    cout<<"arr[0] = "<< *(arr + 0) << endl;
    cout<<"arr[1] = "<< *(arr + 1) << endl;
    cout<<"arr[2] = "<< *(arr + 2) << endl;

   int brr[10] = { 2 , 5 , 6};
   cout<< "elements in brr[10] ="; 
   for (int i = 0 ; i < 10 ; i++){
    cout<<brr[i]<<" ";
   }

   cout<<endl;

   cout<<"*brr = "<<*brr<<endl;//2
   cout<<"*brr+1 = "<<*brr +1 <<endl;//2+1
   cout<<"*(brr+1) = "<<*(brr +1)<<endl;// brr is address , addr increment, print adress val
   cout<<"*(brr)+1 = "<<*(brr) +1 <<endl;//2+1

   cout<<"special case = "<<endl;
   cout<<"arr[2] = "<< arr[2]<< endl;
   cout<<"*(arr+2) = "<<*(arr+2)<<endl;

   // means 
   //arr[i]=*(arr+i) they both are same 
   //i[arr]=*(i+arr) 
   //above both expression were same 

   cout<<"2[arr] = "<< 2[arr]<< endl;
   cout<<"*(2+arr) = "<<*(2+arr)<<endl;

   int crr[5]={};
   int *ptr = &arr[0];

// crr->710...
// crr = crr +1 ; (Error)...
// ptr = ptr +1 ;// this is posible there is no error...

int err[5]={1,2,3,4,5};

string ch = "abcde";

cout<<"err = "<<err<<endl;
cout<< "ch = "<<ch<<endl;
cout<< "&ch = "<<&ch<<endl;


    
    return 0;
}
