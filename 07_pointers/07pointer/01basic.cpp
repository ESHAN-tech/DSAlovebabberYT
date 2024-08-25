#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i = 7;
    int num = 5;
    cout << num << endl;

    cout << "address of num = " << &num << endl;

    // creating the pointer
    int *ptr = &i; // here pointer is created and i address is given

    cout << "ptr = " << ptr;
    cout << endl;
    cout << "*ptr = " << *ptr;
    cout << endl;

    // '*' mtlb us address per jo value h usko print ker do...
    int *qtr = &num; // yaha per &num he ayega or kuch be nahi

    cout << "qtr = " << qtr;
    cout << endl;
    cout << "*qtr = " << *qtr;
    cout << endl;

    // if any pointer is pointing NULL and we want to access that pointer
    // then segmentation error will occur...

    cout << sizeof(num) << endl; // ye 4 byte k hote hai...
    cout << sizeof(ptr) << endl; // pointer 8 bytes ka hota hai...
    cout << sizeof(qtr) << endl;

    //special case 
    int j =5;
    int * p = 0;
    p = &j;

    cout<<p<<endl;
    cout<<*p<<endl;

    int num2 = 8;
    int a = num2 ;// a me num ki copy gaye thi 

    a++;

    cout<<num2<<endl;
    cout<<a<<endl;

    // now do the same case with pointer ...

    int num3 = 5;
    int *p2 = &num3;

    cout<<" num before increment *p2 = "<<num3<<endl;
    (*p2)++;
    cout<<" num after incrementing *p2 = "<<num3<<endl;
    //here we can see that num get incremented...
    //means pointer banane per koi copy nahi bante hai...

    return 0;
}
