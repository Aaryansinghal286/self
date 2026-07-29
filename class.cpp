// WAP using inline function to calculate simple interest. Also use function overloading and default arguments.
// #include <iostream>
// using namespace std;
// inline float SI(double p, float r, float t=10)
// {
//     return (p*r*t)/100;
// }
// float SI(double P){
//     return (P*8.15*10)/100;
// }
// int main()
// {
//     cout<<SI(2000, 8.15, 8)<<endl<<
//     SI(2000, 9.10)<<endl<<
//     SI(2300)<<endl;
//     return 0;
// }




// WAP to calculate cube of a number using inline function and default arguments.
// #include <iostream>
// using namespace std;
// inline int cube(int n=5)
// {
//     return n*n*n;
// }
// int main()
// {
//     cout<<cube()<<endl<<cube(3)<<endl;
//     return 0;
// }




// WAF to print the students information and keep the branch as default arguments
// #include <iostream>
// using namespace std;
// void Info(string name, int age, string branch = "Computer Science")
// {
//     cout << "Name: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "Branch: " << branch << endl;
// }
// int main()
// {
//     Info("Alice", 20);
//     Info("Bob", 22, "Mechanical");
//     return 0;
// }




// WAP to calculate the area by using function overloading.
// #include <iostream>
// using namespace std;
// double area(double side){
//     return side*side;   
// }
// double area(double length, double width) {
//     return length * width;
// }
// double area(double radius, bool isCircle) {
//     return 3.14 * radius * radius;
// }
// int main() {
//     cout << "Area of Square: " << area(5.0) << endl;
//     cout << "Area of rectangle: " << area(5.0, 3.0) << endl;
//     cout << "Area of circle: " << area(4.0, true) << endl;
//     return 0;
// }




// WAP to create a program that accepts an integer by reference and increases its value by 20. Display the value before and after the function call.
// #include <iostream>
// using namespace std;
// void increase(int &num)
// {
//     num = num + 20;
// }
// int main()
// {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;
//     cout << "Before function call: " << n << endl;
//     increase(n);
//     cout << "After function call: " << n << endl;
//     return 0;
// }




// WAP to write class employee with data members Employee ID, Name and salary. Define all member functions outside the class using scope-resolution function: Accept details, Display details and increase slary by 10%
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int empId;
    string name;
    float salary;
public:
    void accept();
    void display();
    void increaseSalary();
};
void Employee::accept()
{
    cin >> empId;
    cout << "Enter Employee ID: " << empId << endl;
    cin.ignore();
    getline(cin, name);
    
    cout << "Enter Employee Name: " << name << endl;
    cin >> salary;
    cout << "Enter Salary: " << salary << endl;;
}
void Employee::increaseSalary()
{
    salary = salary + (salary * 10 / 100);
}
void Employee::display()
{
    cout << "\nEmployee Details" << endl;
    cout << "Employee ID : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Salary : " << salary << endl;
}
int main()
{
    Employee e;
    e.accept();
    e.increaseSalary();
    cout << "\nAfter 10% Salary Increase:";
    e.display();
    return 0;
}