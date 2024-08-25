#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Union (vector<int> &arr , vector<int> &brr , vector<int> &crr )
{
    int k = 0 ;
    for(int i=0 ; i < arr.size() ; i++){
        crr.push_back(arr[i]);
    }
    for(int j = 0 ; j < brr.size(); j++){
        crr.push_back(brr[j]);
    }

    // now fill the left elemnt of arr and brr.....

}
void print(vector<int> &crr){
    for(int i = 0 ; i < crr.size(); i++ ){

        cout << crr[i]<<" ";
    }
}

int main()
{
    int n = 3;
    vector<int>arr ={1,2,3};
    
    int m = 2;
    vector<int>brr={4,5};

    vector<int>crr;
    Union(arr, brr ,crr );

    print(crr );
    
    
    return 0;
}
