// Classes and objects
// --> objects are entities in real world
// --> Class is like a  blueprint of these entities

#include <iostream>
#include <string>
using namespace std;

// class teacher{
// public:
//     // properties
//     string name;
//     string dept;
//     string subject;
//     double salary;

//     // methods
//     void changedept(string newDept){
//         dept=newDept;
//     }
// };

// int main(){
//     teacher t1; //constructor call 
//     t1.name="Karan";
//     t1.dept="CSE";
//     t1.subject="CS";
//     t1.salary=50000;
//     cout<<t1.name<<endl;
// }



// Setter and getter functions
// class teacher{
// private:
//     double salary;
// public:
//     // properties
//     string name;
//     string dept;
//     string subject;

//     // methods
//     void changedept(string newDept){
//         dept=newDept;
//     }
//     // Setter
//     void setSalary(double s){
//         salary=s;
//     }

//     // getter
//     double getSalary(){
//         return salary;
//     }
// };
// int main(){
//     teacher t1;
//     t1.name="Karan";
//     t1.dept="CSE";
//     t1.subject="CS";
//     t1.setSalary(25000);
//     cout<<t1.name<<endl;
//     cout<<t1.getSalary()<<endl;
// }



// Encapsulation
// class Account{
// public:
//     string AccID;
//     string username;

// private:
//     double balance;
//     string password;
// }

class teacher{
private:
    double salary;

public:
    // non-parameterized
    teacher(){
        dept="CSE";
    }

    // Parameterized constructor
    teacher(string n, string d, string s, double sal){
        this->name=n;  //This (->) pointer
        dept=d;
        salary=sal;
        subject=s;
    }
    string name;
    string dept;
    string subject;

    void getInfo(){
        cout<<"name: "<< name <<endl;
        cout<<"Subject: "<< subject << endl;
        cout<<"dept: "<<dept<<endl;
    }
};
int main() {
    teacher t1("karan", "CS", "CS", 50000);
    t1.getInfo();
    return 0;
}