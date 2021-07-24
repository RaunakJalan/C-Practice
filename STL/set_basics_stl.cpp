#include <iostream>
#include <set>
using namespace std;

// Set is used to store unique and sorted(ordered) collection of elements. Tree like structure BST/Red Black Tree. Insert and Delete -> O(Log N).
//Set cannot be updated. Like we want to set 3 as 13 in {1,2,3,5}, then we would have to remove 3 and then add 13.

int main(){

    int arr[] = {10,20,11,9,8,11,10};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;

    for(auto i:arr){
        s.insert(i);
    }

    // Iterator 
    for(set<int>::iterator it = s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // Erase
    cout<<"Deleting 10 and 11 from set"<<endl;
    s.erase(10); // -> 1st way
    auto it = s.find(11);
    s.erase(it);  // -> 2nd way
    for(set<int>::iterator it = s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;


    return 0;
}