#include <iostream>
using namespace std;

int main() {
    char* charPointer = nullptr;
    int* intPointer = nullptr;
    double* doublePointer = nullptr;
    void* voidPointer = nullptr;

    cout << "Size of char pointer: " << sizeof(charPointer) << " bytes" << endl;
    cout << "Size of int pointer: " << sizeof(intPointer) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(doublePointer) << " bytes" << endl;
    cout << "Size of void pointer: " << sizeof(voidPointer) << " bytes" << endl;

    return 0;
}
