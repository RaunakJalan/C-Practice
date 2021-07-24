#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){

    // Unordered Map -> Based on Hash Table. We use it as Separate Chaining technique.
    // Push -> O(1) and Pop -> O(1), Find -> O(1), all on average -> because of rehashing.
    //Before rehashing, complexity is 1 for N elements, after that due to rehashing it goes to N/2N; so on average it is O(1).

   unordered_map<string, int> um; 

    um.insert(make_pair("Mango", 100));
    um.insert(make_pair("Apple", 120));
    um.insert(make_pair("Banana", 20));
    um.insert(make_pair("Litchi", 60));
    um.insert(make_pair("Pineapple", 80));


    // Search
    string fruit;
    cout<<"Enter fruit to search: ";
    cin>>fruit;

    unordered_map<string, int>::iterator it = um.find(fruit);
    if(it!=um.end()){
        cout<<"Price of "<<fruit<<" is "<<um[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    // another way to find a particular key
    // unordered_map stores unique keys only once

    if(um.count(fruit)){
        cout<<"Price of "<<fruit<<" is "<<um[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    // Update the value
    um[fruit]+=22;
    cout<<"New Price of "<<fruit<<" is "<<um[fruit]<<endl;

    // Erase
    um.erase(fruit);
    cout<<fruit<<" deleted."<<endl;
    if(um.count(fruit)){
        cout<<"Price of "<<fruit<<" is "<<um[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    // Iterate over all key value pairs
    for(auto it = um.begin(); it!=um.end(); it++){
        cout<<(*it).first<<"........."<<(*it).second<<endl;
    }

    for(auto it = um.begin(); it!=um.end(); it++){
        cout<<it->first<<"-------->"<<it->second<<endl;
    }

    // for each
    for(auto fpair: um){
        cout<<fpair.first<<" : "<<fpair.second<<endl;
    }   

    return 0;
}