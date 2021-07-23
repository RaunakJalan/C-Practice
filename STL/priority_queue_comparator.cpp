#include <iostream>
#include <queue>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(){

        }
        Person(string n, int a){
            name = n;
            age = a;
        }
};

class PersonCompare{
    public:
    // return the greater age
        bool operator()(Person A, Person B){
            return A.age < B.age;
        }
};

int main(){

    // Push -> O(log N) and Pop -> O(log N), Top -> O(1)

    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    priority_queue<Person, vector<Person>, PersonCompare> pq; // default is max priority queue (max heap)
    
    for(int i = 0; i<n; i++){
        string name;
        int age;
        cin>>name;
        cin>>age;
        Person p(name, age);
        pq.push(p);
    }
    cout<<"------------------------------------------------------------"<<endl;

    int k=3;

    for(int i = 0; i<k; i++){
        cout<<pq.top().name<<" "<<pq.top().age<<endl;
        pq.pop();
    }
    cout<<endl;

    return 0;
}