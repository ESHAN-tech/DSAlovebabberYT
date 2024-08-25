#include <iostream>
using namespace std;

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        char temp = ch - 'a' + 'A';
        return temp;
    } else {
        return ch;
    }
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        char temp = ch - 'A' + 'a';
        return temp;
    } else {
        return ch;
    }
}

int main() {
    cout << "Character is = " << toUpperCase('c') << endl;
    cout << "Character is = " << toLowerCase('E') << endl;

    return 0;
}
