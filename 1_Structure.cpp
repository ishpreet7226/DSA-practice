#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float marks;
}

int main() {
    Student s1={101,"ishpreet",0};
    cout<<"ID: "<<s1.id<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
  
    return 0;
}
