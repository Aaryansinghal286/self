// write a cpp program to display employee details : ID, name, Salary
// // create a class employee and use the arrow opertaor for accessing the class members
// #include <bits/stdc++.h>
// using namespace std;
// class employee
// {
// public:
//     string name;
//     int id;
//     int salary;
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Id: " << id << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };
// int main()
// {
//     employee e1;
//     e1.name = "ABC";
//     e1.id = 10;
//     e1.salary = 500000;
//     cout << "By dot operator-> " << endl;
//     // Using dot operator
//     e1.display();
//     // Using arrow operator
//     cout << "By arrow operator-> " << endl;
//     employee *e = &e1;
//     e->display();
//     return 0;
// }




// WAP to create 50 objects of student details 
// #include <bits/stdc++.h>
// using namespace std;
// class employee
// {
// public:
//     string name;
//     int id;
//     int salary;
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Id: " << id << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };
// int main()
// {
//     employee e1[50];
//     for (int i = 0; i < 50; i++)
//     {
//         e1[i].name = "ABC";
//         e1[i].id = 101 + i;
//         e1[i].salary = 25000 + (i * 10000);
//     }
//     employee *e = e1;
//     for (int i = 0; i < 50; i++)
//     {
//         (e + i)->display();
//     }
//     return 0;
// }




// Create a class containing the private data member
// def num func call the are outside the class as inline function
#include <bits/stdc++.h>
using namespace std;
