#include <iostream>
#include<algorithm>
using namespace std;

// here in this quetion you have a number and you have to find the square root of that num...
// first trying it using brute force method

int givesqrtrootof (int num ){
    int ans = -1;
    for(int i = 0 ; i < num ; i++){
        if(i*i == num){
            ans = i;
        }
    }
    return ans;
}
int main()
{
    cout<<givesqrtrootof (25 )<<endl;
    cout<<givesqrtrootof (144 )<<endl;
    cout<<givesqrtrootof (169 )<<endl;
    cout<<givesqrtrootof (170 )<<endl;

    
    
    return 0;
}
