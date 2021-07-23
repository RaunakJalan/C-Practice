#include <iostream>
#include <queue>
using namespace std;

int main(){

    // Push -> O(log N) and Pop -> O(log N), Top -> O(1)

    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    priority_queue<int> pq; // default is max priority queue (max heap)
    priority_queue<int, vector<int>, greater<int> > mpq; // min priority queue (min heap)
    
    for(int i = 1; i<=n; i++){
        int no;
        cin>>no;
        pq.push(no);
        mpq.push(no);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    while(!mpq.empty()){
        cout<<mpq.top()<<" ";
        mpq.pop();
    }
    cout<<endl;


    return 0;
}