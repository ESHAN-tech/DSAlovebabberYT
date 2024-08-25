#include<iostream>
#include<vector>
using namespace std;

void rotate (vector<int>& nums , int k )
{
    vector<int>temp (nums.size());
    for(int i =0 ; i <= nums.size() ; i++){
        temp[(i+k) % nums.size()]=nums[i];

    } //copy temp into num vector . . .
    nums = temp;
}

void print (vector<int>&arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    vector<int>arr={1,7,9,11};
    rotate (arr , 2);
    print(arr);
    return 0;
}
