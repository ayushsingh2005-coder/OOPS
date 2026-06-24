/*
ENCAPSULATION : 
-it binds the data and methods in a class
-Like a capsule , it combines and binds them together.

2.Functions of Encapsulation
- provide a secure layer
- hides internal implementation of code and data in a class
- exposes only necessary information to the external world

3.As we're hiding data from outer classes or the world , encapsulation is also known as DATA HIDING.

4. GOAL : the goal is to implement classes in a way that prevents unauthorized access to or modification of the original contents of a class by its instances(or objects).
5.The underlying algo of one class need not be known to another class. the Two classes can still communicate , though

========= PERFECT ENCAPSULATION =========
- If all data memebers/varibles are private
- handling access to encapsulated data
   - despite encapsulation, external interaction is necessary.
   - implementation of public methods , such as getters and setters ,allows external communication
   - these methods enable controlled acess to the encapsulated data

============= ACCESS MODIFIERS ===========
way to define access to the data and methods of the program.
2. PUBLIC:
   members declared as public are accessible from any part of the program 
   they can be accessed by objects of the class and external code.

3. PRIVATE :
   members declared as private are accessible oonly within the same class.
   they are not accessible from outside the class , including derived class.

3. PROTECTED : 
   members declared as protected are accessible within the same and by derived classes.
   they are not directly accessible from external code.
*/

// IMPLEMENTATION OF ENCAPSULATION

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    int id;
    int age;
    string name;
    int nos;

private:
    int *gpa;
    string gf;

public:
    // 1.default constructor (no parameter)
    Student(){
        cout << "student default ctor called" <<endl;
    }

    // 2.PARAMETERISED CONSTRUCTOR
    Student(int id , int age ,string name , int nos , float gpa , string gf){
        cout << "student parameterised default ctor called" <<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
        this->gf = gf;
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
        delete this->gpa;
    }

private: 
    void chatting(){
        cout << this->name  << "Chatting with gf" <<endl;
    }
};

int main(){

    Student A(1,12,"ranu",5,7.8 , "menu");
    cout << A.age <<endl;
    // cout <<A.gf<<endl; //not accessible as it is private
    // cout <<A.gpa << endl; //inaccessible

    // A.chatting(); //inaccessible

    return 0;
}