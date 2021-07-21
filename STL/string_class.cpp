#include <iostream>
#include <string>

using namespace std;

int main(){

    // String Init
    string s0;
    string s1("Hello");
    string s2 = "Hello World";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    // Check if string is empty or not(s0 is empty):
    if(s0.empty()){
        cout<<"s0 is an empty string."<<endl;
    }

    // Append characters in string
    s0.append("I love C++ ");
    cout<<s0<<endl;
    s0 += " and Python";
    cout<<s0<<endl;

    // Remove and erase string content
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    // Compare 2 strings.
    s0 = "Apple";
    s1 = "Mango";
    cout<<s1.compare(s0)<<endl; // Returns an integer, ==0 for equal string else > 0 or < 0 depends on lexiographical order. s1.compare(s0) gives 1 but s0.compare(s1) gives -1

    // Can also use < and > because they are overloaded operators for String.
    if(s1>s0){
        cout<<"Mango is lexi greater than Apple."<<endl;
    }


    return 0;
}