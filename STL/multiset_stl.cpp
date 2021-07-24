#include <iostream>
#include <set>
using namespace std;

typedef multiset<int>::iterator It;

// Multi Set is a set like container that can store multiple elements with same value.
// All elements are stored in a specific order -> sorted according to internal comparing object, can give custom object too.
// MultiSet also cannot be updated. Like we want to set 3 as 13 in {1,2,3,5}, then we would have to remove 3 and then add 13.
// Associative container - elements are reffered by their value and not by the index.
// UNderlying implementation is BST


int main(){

    int arr[] = {10, 20, 30, 11, 9, 8, 11, 10, 30, 30, 30, 70, 70, 70};
    int n = sizeof(arr)/sizeof(int);

    multiset<int> m(arr, arr+n); // Uses values from arr from 0 to 6 index

    // Iterator 
    for(multiset<int>::iterator it = m.begin(); it!=m.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // Inserting 80 in set
    cout<<"Inseting 80 to set"<<endl;
    m.insert(80);

    for(auto x:m){
        cout<<x<<", ";
    }
    cout<<endl;

    //Count frequency of an element
    cout<<"Frequency of 10: "<<m.count(10)<<endl;

    // Erase
    cout<<"Deleting 10 and 11 from set"<<endl;
    m.erase(10); // -> 1st way -> deletes all occurings of the value

    // Find
    auto it = m.find(11); // Gives iterator to a element
    
    m.erase(it);  // -> 2nd way -> deletes the value at given address.
    
    for(set<int>::iterator it = m.begin(); it!=m.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    cout<<"After deletion Frequency of 10: "<<m.count(10)<<endl;

    // Get all iterators of 30
    cout<<"Getting range of elements with 30: "<<endl;
    pair<It, It> p = m.equal_range(30);

    for(auto it = p.first; it!=p.second; it++){
        cout<<(*it)<<" - ";
    }
    cout<<endl;

    // Lower bound and Upper Bound:
    // Getting all elements with value between 11 and 77 included.
    for(It it = m.lower_bound(11); it!=m.upper_bound(77); it++){
        cout<<(*it)<<"-";
    }
    cout<<endl;

    return 0;
}