#include <iostream>
using namespace std;
// special number:- 145 = 1! + 4! + 5!
// logic:- Seprate the number , then do the factorial of the number...
void CheckSpecial(int n){
    int ans = n;
    int d , j = 1 , fact = 1 , sum = 0;
   //...seprating the number...
    
        while ( n != 0){
            d= n % 10;
            for(int j = 1 ; j <= n ; j++){
            fact = fact * j;
            j++;
            }
        }
        sum= sum + fact;
        n = n/10;


    if(ans == sum){
        cout<<ans<<" is the special number "<<endl;
    }else{
        cout<<ans<<" is not the special number "<<endl;
    }

}

int main()
{
    // taking input from the user 
    int n ; 
    cout<<" Enter the number = ";
    cin>>n;

    // doing the function call

    CheckSpecial(n);

    return 0;
}
