#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3};
    
    array<int , 4 > a ={1,2,3,4};
    int size = a.size();

    for(int i= 0 ; i < size ; i++){
        cout<<a[i]<< endl;

    }

    cout<<" size of  array a.size() = "<<a.size()<<endl;
    cout<<" element at particular index a.at() = "<<a.at(2)<<endl;
    cout<<" checking array is empty or not  a.empty() = "<<a.empty()<<endl;
    cout<<" front element of array a.front() = "<<a.front()<<endl;
    cout<<" last  element of array a.back() = "<<a.back()<<endl;
}

