#include <iostream>
#include <algorithm>
using namespace std;


/*

solving step
step 1) use two pointer approch...
step 2) find length of array and passed that leng of arr in input as size of rev arr

*/

void reversestr (char str[] , int n){
    int s = 0 ;
    int e = n - 1;
    
    while (s < e ){
        swap(str[s++] , str[e--]);
    }

}

int lenthofstr(char str[])
{
    int count =0;
    for(int i = 0 ; str[i]!= '\0' ; i++)
    {
        count++;
    }
    return count;
} 

void print(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    char hipo[20] ="helloworld";
    int len =lenthofstr(hipo);
    reversestr(hipo , len);
    print(hipo);

    return 0;
}
