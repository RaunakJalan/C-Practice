#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() > b.length();
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cin.get(); //Any extra enters pressed after entering 'n' will be captured
    string s[n];

    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
    }

    cout<<"********************************************************************"<<endl;
    cout<<"Before Sorting:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<s[i]<<endl;
    }

    sort(s, s+n, compare);

    cout<<"********************************************************************"<<endl;
    cout<<"After Sorting:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<s[i]<<endl;
    }

    

    return 0;
}