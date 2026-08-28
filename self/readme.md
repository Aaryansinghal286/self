<!-- OOPs readme File -->

# Access modifiers:
1. private -> deafault, data and methdos are accessible only inside class
2. public -> data & methods are accessible to everyone
3. Protected -> data & methods are accessible inside class as well as to its derived class

# setter -> to set private values
# getter -> to get values from private values


# Pillars of OOPs
1. Encapsulation: Wrapping up of data and member functions in single unit called class(ek class banana aur uske andar member aur data func ko implement krna)
-> helps in data hiding : use private modifier to save sensitive information
->for interview : encapsulation,its example, data hiding, its example, access modifers and usage with example

2. Abstraction:
3. Inheritance:
4. Polymorphism:

<!-- Constructor -->
# Special method automatically invoked at time of object creation
->used for initialisation
->same name as class
->only called once (automatically), at object creation
->either made by programmer or compiler itself
->memory allocation happens when constructor is called (only for objects not for classes)

<!-- Types of constructors -->
1. Non-parameterized Constructor
    eg:-
    teacher(){
        dept="CS";
    }
2. Parameterized Constructor
    eg:-
    teacher(string n; string d; string s; double sal;){
        dept="CS";
    }

# this (->) Pointer


# Constructor Overloading
constructor with same name but different types
-> type of polymorphism