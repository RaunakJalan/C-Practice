#include <iostream>
#include <map>
#include<string>

using namespace std;

int main(){

    // Push -> O(log N) and Pop -> O(log N), Top -> O(1)

    map<string, int> m;

    // Insert
    m.insert(make_pair("Mango", 100));

    pair<string, int>p;
    p.first = "Apple";
    p.second = 120;
    m.insert(p);

    m["Banana"] = 20;

    // Search
    string fruit;
    cout<<"Enter fruit to search: ";
    cin>>fruit;

    map<string, int>::iterator it = m.find(fruit);
    if(it!=m.end()){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    // another way to find a particular key
    // map stores unique keys only once

    if(m.count(fruit)){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    // Update the value
    m[fruit]+=22;
    cout<<"New Price of "<<fruit<<" is "<<m[fruit]<<endl;

    // Erase
    m.erase(fruit);
    cout<<fruit<<" deleted."<<endl;
    if(m.count(fruit)){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<fruit<<" is not present"<<endl;
    }

    m["Litchi"] = 60;
    m["Pineapple"] = 80;

    // Iterate over all key value pairs
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<"........."<<(*it).second<<endl;
    }

    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<"-------->"<<it->second<<endl;
    }

    // for each
    for(auto fpair: m){
        cout<<fpair.first<<" : "<<fpair.second<<endl;
    }


    return 0;
}