/*
#include <iostream>
using namespace std;

int main()
{
    int* ptr = nullptr;
    cout<<"*ptr = "<<*ptr<<endl;

    int* ptr2 = 0;
    cout<<"*ptr2 = "<<*ptr<<endl;

    int* ptr3;
    if (ptr3 != nullptr) {
    // Safe to dereference
        cout<<*ptr3;   
    }else {
    // Agar pointer null hai toh handle karo
    cout << "Pointer null hai";
}
    return 0;
}


Don't point any valid location...
used to indicate that pointer is not using any memeory location

*/

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;  // Pointer ko null se initialize kiya

    if (ptr == nullptr) {
        cout << "Pointer null hai, kisi memory location ko point nahi kar raha." << endl;
    }

    // Dynamically memory allocate ki pointer ko
    ptr = new int(10);

    if (ptr != nullptr) {
        cout << "Pointer ab valid memory ko point kar raha hai, value: " << *ptr << endl;
    }

    // Memory ko free karte hain
    delete ptr;
    ptr = nullptr;  // Deletion ke baad pointer ko null kar diya

    return 0;
}


