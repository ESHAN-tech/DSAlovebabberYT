#include <iostream>
#include<algorithm>
using namespace std;

void update(int n){
    n++;
}


int main()
{
    int i = 5 ;
    //create a refrence variable j k adress me j ki value inserted
    // meeans thier is location of block j and at that block i value is inserted 

    int &j = i;

    cout<<"value of i = "<< i << endl ;
    cout<< "value of j = "<<j << endl;
    
    int n ;
    // taking a input from the user 
    cout << "enter the value of n = ";
    cin>>n;

    cout<< " n before the update function = "<<n<<endl;
    // calling the update funtion 
    update(n);
    cout<< " n after the update function = "<<n<<endl;

    // here in the o/p value is not updated bcoz the copy of the n 
    // is given in the function not the actual value ....
    

    return 0;
}
