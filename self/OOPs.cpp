// Classes and objects
// --> objects are entities in real world
// --> Class is like a  blueprint of these entities

#include <iostream>
#include <string>
using namespace std;

class teacher{
public:
    // properties
    string name;
    string dept;
    string subject;
    double salary;

    // methods
    void changedept(string newDept){
        dept=newDept;
    }
};

int main(){
    teacher t1;
    t1.name="Karan";
    t1.dept="CSE";
    t1.subject="CS";
    t1.salary=50000;

    cout<<t1.name<<endl;
}