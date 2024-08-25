#include <iostream>
#include <vector>
using namespace std;

void valid_String(vector<char> S) {
    int counthash = 0;
    int countstar = 0;

    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '*') {
            countstar++;
        } else if(S[i] == '#') {
            counthash++;
        }
    }
    
    cout << "Number of hashes are: " << counthash << endl;
    cout << "Number of stars are: " << countstar << endl;

    if(countstar > counthash) {
        cout << "Given string is positive." << endl;
    } else if(countstar < counthash) {
        cout << "Given string is negative." << endl;
    } else {
        cout << "Equal number of * and # : 0" << endl;
    }
}

int main() {
    vector<char> S = {'#', '#', '#', '*', '*', '*'};

    // Function call
    valid_String(S);

    return 0;
}
