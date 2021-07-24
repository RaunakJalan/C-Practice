#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    // Multimap -> One map can have multiple keys
    multimap<char, string> m; // Push -> O(log N) and Pop -> O(log N), Find -> O(log N) -> because of self balancing BST.
    /*
    b batman
    a apple
    b boat
    a angry
    c cat
    d dog
    e elephant
    */

   int n;
   cout<<"Enter number of inputs:";
   cin>>n;

   for(int i = 0;i<n;i++){
       char ch;
       string s;
       cin>>ch>>s;

       m.insert(make_pair(ch, s));
   }
    
    for(multimap<char, string>::iterator it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<"........."<<(*it).second<<endl;
    }

    for(auto p:m){
        cout<<p.first<<" -> "<<p.second<<endl;
    }


    // Erase
    auto it = m.begin();
    m.erase(it); // a->apple is erased
    cout<<"Element "<<it->first<<" "<<it->second<<" is removed"<<endl;

    for(auto p:m){
        cout<<p.first<<" ----- "<<p.second<<endl;
    }

    // Find lower bound of b: return next greater than or equal to element
    auto it2 = m.lower_bound('b');//batman
    cout<<it2->first<<" "<<it2->second<<endl;

    auto it3 = m.upper_bound('d'); //elephant
    cout<<it3->first<<" "<<it3->second<<endl;

    cout<<"Range from it2 -> it3"<<endl;

    for(auto it4 = it2;it4!=it3;it4++){
        cout<<it4->first<<" "<<it4->second<<endl;
    }

    // Find a particular element like cat
    auto f = m.find('c');
    if(f->second == "cat"){
        m.erase(f);
    }

    cout<<"After erasing c cat"<<endl;

    for(auto p:m){
        cout<<p.first<<" -> "<<p.second<<endl;
    }

    return 0;
}