#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> d{1,2,3,10,14};
    //Pushback -> Adds element at end. Generally O(1) unless memory expansion is needed.
    d.push_back(16);

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //Popback -> Removes element from end. Generally O(1).
    d.pop_back();

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    // Insert some elements in middle O(N);N is number of elements added+number of elements shifted
    d.insert(d.begin() + 3, 4, 100); //Here 4 specifies number of times we need to enter 100. It enters 100 4 times

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    // Erase some element in middle O()
    d.erase(d.begin() + 3); 
    d.erase(d.begin()+2, d.begin()+5); // Erases range of elements

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    // size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl; //Still shows 10 because we added some elements above and vectors do not generally shrink hence we avoid shrink operation.

    // avoid shrink
    d.resize(8); // When we resize and perform decrease, capacity remains same but vectore gets 8 elements rest all 0. For size increase, like using 18 here, capacity increases.
    cout<<d.capacity()<<endl;

    d.resize(18);
    cout<<d.capacity()<<endl;

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;


    // Remove all vector elements. does not deletes the memory occupied, thus capacity remains same
    d.clear();
    cout<<d.size()<<endl;

    // check if vector is empty
    if(d.empty()){
        cout<<"This is an empty vector."<<endl;
    }
    cout<<d.size()<<endl;

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    //{10,11,12}

    // Front: Gives first element. Back: gives last element

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;

    // Reserve
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    vector<int> v;

    // To avoid memory doubling, we use reserve function
    v.reserve(1000);
    for(int i = 0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing Capacity:"<<v.capacity()<<endl;
    }

    cout<<"Capacity:"<<v.capacity()<<endl; // Before reserve: for 5 elements, capacity was 8

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl; 





    return 0;
}