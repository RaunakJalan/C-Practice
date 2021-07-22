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
    
    return 0;
}