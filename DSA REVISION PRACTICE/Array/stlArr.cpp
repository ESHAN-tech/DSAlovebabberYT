#include <iostream>
#include<array>
using namespace std;


int main()
{
    //Two ways of decleration_
    array<int ,5> arr1{{3,4,5,6,7}};
    array<int ,5> arr2 = {1, 2,3,4,5};
    cout<<endl;

    //.size(_) of the STL array_
    cout<<"Size of arr1 = "<<arr1.size()<<endl;
    cout<<"Size of arr2 = "<<arr2.size()<<endl;
    cout<<endl;

    //using Loop in STL array_
    cout<<"Element of arr1 = ";
    for(int i : arr1)
    cout<<i<<" ";

    cout<<endl;

    cout<<"Element of arr2 = ";
    for(auto i : arr2)
    cout<<i<<" ";

    cout<<endl<<endl;

    //Using char array_
    cout<<"char array = ";
    array<char , 3> brr={'G' , 'f' ,'L'};
    cout<<brr[0]<<" "<<brr[2];// directly printing array (don't use any loop)
    
    cout<<endl<<endl;

    //front and Back in STL 
    cout<<"Font in brr STL = ";
    cout<<brr.front();

    cout<<endl;

    cout<<"Back in brr STL = ";
    cout<<brr.back();

    cout<<endl<<endl;

    //Swaping in STL .swap()
    array<int , 3> crr={'G','f','G'};
    array<int , 3> crr2={'M','M','P'};

    cout<<"Array before swaping :- "<<endl;
    cout<<"crr = ";
    for(int i:crr){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"crr2 = ";
    for(int i:crr2){
        cout<<i<<" ";
    }
    cout<<endl;

    crr.swap(crr2);
    
    cout<<endl;
    cout<<"Array After swaping :- "<<endl;
    cout<<"crr = ";
    for(int i:crr){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"crr2 = ";
    for(int i:crr2){
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    // .empty() of STL 
    bool x = crr.empty();
    cout<<x<<endl;
    cout<<boolalpha<<(x);//boolalpha convert bool number to alphabet like 0-false,1-True

    cout<<endl<<endl;

    //.at() function of c++ STL
    cout<<crr.at(2)<<" "<<crr.at(1);
    cout<<endl<<endl;

    //.fill() function of c++ STL
    //This is specially used to initialize or fill all the indexes of the array with a similar value.
    array<int,5> drr;
    drr.fill(1);
    for(int i:drr){
        cout<<i<<" ";
    }

    cout<<endl<<endl;

    //size() & max_size() function

    cout<<"total num of index of drr = "<<drr.size()<<endl;
    cout<<"max size of drr = "<<drr.max_size()<<endl;//total num of index
    cout<<"size of array drr = "<<sizeof(drr);//5*4(num of block = 5 , 4 size of each int block)

    cout<<endl<<endl;
    //Data Function of STL 
    // Iska fayda yeh hai ki aap array ke elements ko pointer ka use karke directly access kar sakte ho.
    array<int ,5> Err={1,2,3,4,5};
    int *ptr = Err.data();

    for(int i:Err){
        cout << *(ptr + i) << " ";
    }
    cout<<endl<<endl;

    
    return 0;
}
