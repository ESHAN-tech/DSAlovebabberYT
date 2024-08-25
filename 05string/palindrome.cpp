#include<iostream>
#include<algorithm>
using namespace std;

char toUpperCase(char ch) {
   if (ch >= 'A' && ch <= 'Z') {
        return ch;
    } else {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}


char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//Function to check if a string is a palindrome...
bool checkpalindrome(char str[] , int n) {
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (toLowerCase(str[s]) != toUpperCase(str[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// Function to get the length of the string
int getlenght(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}


int main() {
    char hipo[20] = "eshan";
    char hero[10] = "Noon";
    int len = getlenght(hipo);
    int len2 = getlenght(hero);

    cout << "Is 'hipo' a palindrome? " << (checkpalindrome(hipo, len) ? "Yes" : "No") << endl;
    cout << "Is 'hero' a palindrome? " << (checkpalindrome(hero, len2) ? "Yes" : "No") << endl;
    cout<<" character is "<<toLowerCase('B')<<endl;
    cout<<" character is "<<toUpperCase('a')<<endl;
    return 0;
}
