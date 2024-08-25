#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void movezero(vector<int>&nums)
{
    int i = 0;
    
    for(int j =0 ; j< nums.size();j++){
        if(nums[j] != 0){
            swap(nums[j] , nums[i]);
            i++; 
        }
    }
    
}


void print(vector<int> &crr){
    for(int i = 0 ; i < crr.size(); i++ ){

        cout << crr[i]<<" ";
    }
}


int main()
{
    vector<int>arr={0,1,0,3,12};

    movezero(arr);

    print(arr);
  
    return 0;
}
