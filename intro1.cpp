//* OOPS : Object-Orinted Programming System

//* oops was developed because of limitations were discovered in earlier approaches to programming 
/*
Why OOPS Was Introduced(OOPS was developed to overcome the limitations of procedural programming)
1. Data Security (Encapsulation)
2. Code Reusability (Inheritance)
3. Easier Maintenance
4. Real-World Modeling
5. Flexibility (Polymorphism)

DRAWBACKS of FUNCTIONAL / PROCEDURAL PROGRAMMING 
1.does not model real world problem very well
2.if new data is added, all the functions needs to be modified to access the data 
3.Global data is accessible to all the functions
4.No clear boundaries and well definitions of code
5.No Modularity : functional programs can become montolithic and difficult to maintain as they grow in complexity

so there was problem in exisiting paradigm 
*/

//* WHAT IS OOPS
// "Object-Oriented Programming (OOP) is a programming paradigm that focuses on implementing real-world entities as objects. It organizes data and behavior into classes and objects, making programs more modular, reusable, and maintainable."

// A programming style , involves dividing a program into pieces of objects that can communicate with each other .
// Object-Based Coding - in which each object  has its own attributes and behaviour.
// Fundamental Idea is to combine into single unit , both data and behaviour , that will promote modularity.
// OOPS promotes modularity by encapsulating data and behaviour within objects.this modular approach enhances code resusability and maintainbility as objects can be reused in different parts of the program.


//**  CLASS : it is a blueprint or template of real world entity stating how real world entity gonna look like .
//**  OBJECTS : it is an instance of class.

//* ATTRIBUTES : are the properties or state of an object.
//* BEHAVIOUR : are methods/functions that an object can performs.

//////////////////////////////////////////
//* How to create an object in C++ 

// To do so , we must define some blue print i.e Class
// then create the instance of a class(i.e object)

// =============================================

//* CONSTRUCTOR

//* Constructor kya karta hai?

// Is it true that a constructor helps in creating an object?
// Yes, in an interview we can say that constructors help in object creation, but technically they initialize the object after memory is allocated.

//* a constructor is called when an object is being created while destructor is called when object is being destroyed

//*==== Types of Constructors ====
// 1.DEFAULT CONSTRUCTOR : No parameters
// 2.Parameterized Constructor : takes parameter
// 3.Copy Constructor : Ek object se dusre object ko initialize karta hai

// =============================================

//* THIS Keyword
// this is a special pointer that stores the address of the current object and is used to access the current object's members.

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    // attributes of class (data members)
    // Attributes object ki characteristics/properties/state hoti hain.
    int id;
    int age;
    string name;
    int nos;

    // CONSTRUCTOR 
    // 1.default constructor (no parameter)
    Student(){
        cout << "student default ctor called" <<endl;
    }

    // 2.PARAMETERISED CONSTRUCTOR
    Student(int id , int age ,string name , int nos){
        cout << "student parameterised default ctor called" <<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // 3.COPY CONSTRUCTOR
    Student(const Student &srcobj)//srcobj signifies  A
    {
        cout << "student COPY ctor called" <<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour/methods/member functions 
    void study(){
        cout <<this->name<< "Studying "<<endl;
    }
    void sleep(){
        cout << this->name << "sleeping" << endl;
    }
    void bunk(){
        cout << this->name << "bunking" <<endl;
    }


    // DESTRUCTOR 
    ~Student(){
        cout << "student default dtor called" <<endl;
    }
};

int main(){

    // way 1 to define attributes and methods(takes time and looks like messy )
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Ranu";
    // A.nos= 6;

    // A.study();

    // Student B;
    // B.id = 1;
    // B.age = 15;
    // B.name = "thakkur";
    // B.nos= 6;

    // B.study();

    //WAY 2 : 
    // Student A(1,15,"hiii" , 6); //this object is defined in stack

    // Student B(1,15,"hiii" , 6);

    // cout << A.name << endl;

    // Copy constructor
    // Student C = A; //A goes as parameter to C

    // OR  

    // Student C(A); //it is valid  too 

    // cout << C.name << " " << A.name <<endl;

    //DYNAMIC MEMORY ALLOCATION or student pointer
    Student* A = new Student(1,14,"heyy" ,6);
    // this get created in heap memory

    cout<<A->name << endl;
    cout<<A->age <<endl;
    A->study();

     delete A; //when we allocate memory dynamically we need to free space manually otherwise memory leak would be possible

    return 0;
}

// ANALOGY BETWEEN SCOPE OF FUNCTIONS AND SCOPE OF VARIBALES IN OOPS
// so whenever we came outside the scope of functions defined ,all the variables of that functions will be destroyed .
// similarly in OOPS , whenever an object of a class is destroyed , it call the corresponing destructor of the template