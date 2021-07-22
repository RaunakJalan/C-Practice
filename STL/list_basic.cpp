#include <iostream>
#include <list>
using namespace std;

// List is doubly Linked List

int main(){

    list<int> l;

    // Initialize values
    list<int> l1{1,2,3,10,8,5};

    // Different data type
    list<string> l2{"apple", "guava", "mango", "banana"};

    // Add to back of list
    l2.push_back("pineapple");

    // Iterating over list
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    for(list<string>::iterator it = l2.begin(); it != l2.end(); it++){
        cout<<(*it)<<" -> ";
    }
    cout<<endl;

    // Sorting
    l2.sort();

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // Reverse
    l2.reverse();

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // pop_front
    cout<<l2.front()<<endl;
    l2.pop_front();
    cout<<l2.front()<<endl;

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;


    // add to front of list and removing from end
    cout<<"Front:"<<l2.front()<<endl;
    cout<<"Back:"<<l2.back()<<endl;
    l2.push_front("kiwi");
    l2.pop_back();
    cout<<"Front:"<<l2.front()<<endl;
    cout<<"Back:"<<l2.back()<<endl;

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // Some more functions in list
    l2.push_back("orange");
    l2.push_back("lemon");
    l2.push_back("guava");
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // Remove a fruit by name
    string f;
    cout<<"Enter fruit name to remove:";
    cin>>f;
    l2.remove(f);

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // Erase funtion to rmeove one or more element using index
    //l2.begin()+3 does not work for list because it is not a linear memory
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    // Insert elements in list
    it = l2.begin();
    it++;
    l2.insert(it, "FruitJuice");

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;



    
    return 0;
}