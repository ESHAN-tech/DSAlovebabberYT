#include <iostream>
using namespace std;

int main()
{
    // 1.Uninitialzed Pointer...
    int* ptr;  // Uninitialized pointer, contains a garbage value
    *ptr = 10; // Undefined behavior (may crash or corrupt memory)
    //solution of above...
    int* ptr2 = nullptr;// Safe initialization

    // 2.Dangling Pointer 
    int* ptr3 = new int(10);//Dynamically allocated memory 
    delete ptr3;//memory deallocated
    *ptr3 = 20;//dangling pointer, accessing invalid memory 
    //solution of above...

    // delete ptr3;
    // ptr = nullptr;

    //3.Null Pointer 
    int * ptr4 = nullptr;
    *ptr = 10;// dereferencing...

    //solution...
    if(ptr4 != nullptr){
        *ptr = 10;
    }
    
    //freed or Deleted Memory Access...
    int* ptr5 = new int(5);
    delete ptr5;
    cout << *ptr5;// Accessing deallocated memory, undefined behavior

    

    return 0;
}

/*

Invalid Pointer.....
(*)pointers that either point to a memory location... 
(*)have not been initialized properly...
(*)These pointers may contain garbage values...

*/