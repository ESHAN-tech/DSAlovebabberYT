#include <iostream>
#include <vector>
#include <string>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    int n = s.length();
    char result[n + 1]; // create a character array of length n + 1
    result[n] = '\0'; // null-terminate the character array

    for (int i = 0; i < n; ++i) {
        result[indices[i]] = s[i];
    }
    
    return string(result); // convert the character array back to a string
}

int main() {
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    string shuffled = restoreString(s, indices);
    cout << "Shuffled string: " << shuffled << endl;
    return 0;
}
