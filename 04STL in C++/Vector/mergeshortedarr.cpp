#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

// here we merging two diffrent array in the sorting order ....
// so we have to compare them and then merge them ....
void mergearr (vector<int>&arr , vector<int>&brr , vector<int>&crr){
    int i =0 , j=0 ;

    while (i < arr.size() && j < brr.size())
    {
        if(arr[i] < brr[j]){
        crr.push_back(arr[i]);
        i++;
     }
    else{
        crr.push_back(brr[j]);
        j++;
     }
    }
    // now push the remaining content _ _ _
    while (i< arr.size())
    {
        crr.push_back(arr[i]);
        i++;
    }
    while (j< brr.size())
    {
        crr.push_back(brr[j]);
        j++;
    }

}

void print (vector<int> & crr){
    for(int i = 0 ; i < crr.size() ; i++){
        cout << crr[i]<<" ";
    }
}

int main()
{
    vector<int>arr={1,3,5};
    vector<int>brr={2,4};
    vector<int>crr;
    mergearr (arr , brr , crr);
    print (crr);
    
    return 0;
}
