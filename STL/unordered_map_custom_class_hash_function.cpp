#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Student{
    public:

    string firstname;
    string lastname;
    string rollno;

    Student(string f, string l, string no){
        firstname = f;
        lastname = l;
        rollno = no;
    }

    bool operator==(const Student &s) const{
        return rollno == s.rollno;
    }
};

// For custom Hash Function class, in that we need to have a function that returns a number of type size_t: used to represent size of some memory

class HashFn{
    public:
        size_t operator()(const Student &s) const{
            return s.firstname.length() + s.lastname.length();
        }
};


int main(){

    // Unordered Map -> Based on Hash Table. We use it as Separate Chaining technique.
    // Push -> O(1) and Pop -> O(1), Find -> O(1), all on average -> because of rehashing.
    //Before rehashing, complexity is 1 for N elements, after that due to rehashing it goes to N/2N; so on average it is O(1).

   Student s1("Raunak","Jalan","2596");
   Student s2("Harshit","Mandhyani","2595");
   Student s3("Raunak","Jalan","2597");
   Student s4("Ankit","Singh","2630");

   unordered_map<Student, int, HashFn> student_map;

   // For a custom class key, in order to create a hash map, we need to create 1. a custom hash function and 2. operator overloading for == 
   // Why: Because when traversing linked list in Hash Map, maybe multiple students have same name but different roll number to we need to overload == to check custom Key properties
   // In thi case, to basically check if two students are equal i.e. s1 == s2

    // Add student and marks to map
    student_map[s1] = 100;
    student_map[s2] = 120;
    student_map[s3] = 11;
    student_map[s4] = 45;

    // iterate over all students
    for(auto s:student_map){
        cout<<s.first.firstname<<" "<<s.first.rollno<<endl<<"-------Marks: "<<s.second<<endl;
    }

    cout<<"Marks of student s3: "<<student_map[s3]<<endl;

    return 0;
}