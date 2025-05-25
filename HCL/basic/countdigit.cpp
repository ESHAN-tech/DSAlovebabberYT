#include <iostream>
using namespace std;

int countDigit(int num){
    int count=0;
    int temp = num;
    while(num >0){
        count++;
        int d = num %10;
        num = num/10;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    cout<<"Digit count in a number = "<<countDigit(n);

    return 0;
}
