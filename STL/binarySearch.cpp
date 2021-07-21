#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int arr[] = {20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);

    // Search in a sorted array ---> binary_search

    int key;
    cout<<"Enter Key: ";
    cin>>key;

    bool present = binary_search(arr, arr+n, key);

    if(present){
        cout<<key<<" is Present."<<endl;
    }
    else{
        cout<<key<<" is Not Present."<<endl;
    }

    // 1. Get the index of the element
    // lower_bound(s,e,key) and upper_bound(s,e,key)

    // auto it or int* it
    auto lb  = lower_bound(arr, arr+n,key);
    cout<<"Lower Bound of "<<key<<" : "<<(lb-arr)<<endl;

    // upper_bound
    auto ub  = upper_bound(arr, arr+n,key);
    
    cout<<"Upper Bound of "<<key<<" : "<<(ub-arr)<<endl;

    //upper_bound - lower_bound gives us frequency of the element
    cout<<"Frequency of "<<key<<" : "<<(ub-lb)<<endl;

    return 0;
}