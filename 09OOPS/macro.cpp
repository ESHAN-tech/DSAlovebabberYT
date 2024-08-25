#include <iostream>
#include<algorithm>
#include<string>

//object like macro_._
#define PI 3.14

//chain macro_._
#define harsh
#define harsh " sanatani"

//multiline macro_._
// #define ele 1,
//             2,
//             3

//function macro._._
#define min(a,b)((a<b) ? (a):(b))

using namespace std;
/*
types of maro...

1.object like macro
2.chain maro
3.multi line macro
4.function like macro

 */

int main()
{
    double area;
    int r ;
    cout<<"enter the radius of the circle = ";
    cin>>r;

    area = PI * r * r;

    cout<<" area of the circle is = ";
    cout<<area;
    cout<<endl;

    string b = "bharat";
    cout<<"mera "<<b<<harsh<<endl;

    cout<<min(5, 1000);
    

    


    return 0;
}
