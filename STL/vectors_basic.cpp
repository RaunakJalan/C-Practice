#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> a;
    vector<int> b(5,10); // five integer in a vectore and all have value 10
    vector<int> c(b.begin(), b.end());
    vector<int> d{1,2,3,10,14};

    // Iterating over vector

    for(int i = 0; i< d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator it = d.begin(); it!=d.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int k:d){
        cout<<k<<" ";
    }

    cout<<endl;

    // Add user input to end of vector

    vector<int> v;
    int n;
    cin>>n;
    for(int num = 0; num < n; num++){
        int no;
        cin>>no;
        v.push_back(no);
    }

    for(int x:v){
        cout<<x<<" ";
    }

    cout<<endl;

    // Understand at memory level, what are the differences in two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; // original size of underlying array
    cout<<v.max_size()<<endl; // max elements vectore can hold in worst case

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;

    return 0;
}