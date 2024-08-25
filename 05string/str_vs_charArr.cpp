#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Corrected the size of the character array to include the null terminator
    char hipo[6] = "es\0an";
    string helo = "hello\0world";

    // Adding newline for better readability
    cout << hipo << endl;
    cout << helo << endl;

    return 0;
}
