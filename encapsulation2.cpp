// IMPLEMENTATION OF perfect encapsulation AND setter AND getter functions

// PEREFECT ENCAPSULATION REFERS TO when all the attributes are private or hidden.

#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;

public:

    // getter and setter methods so that we can access the private attributes

    void setGpa(float a) {
        // layer of authentication
        *this->gpa = a;
    }

    float getGpa() const{
        return *this->gpa;
    }

    float getAge() const{
        return this->age;
    }

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
        this->gpa = new float(gpa);
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

    Student A(1,12,"A",6,7.8,"M");
    // cout << A.gf <<endl; //when you execute this statement this will throw an error stating that this is inaccessible as gf attribute is private and in perfect encapsulation we makes every attribute private so how would be access any of them .
    // This is done using getter() and setter() methods [see the above code inside class ]. SO basically if anyone wants to change the value of any attribute they have to pass through this security layer that can only be passed through these functions when declared.

    // Now no one can access like A.age and cannot set it like A.age = 50;
    cout << A.getGpa() <<endl;
    A.setGpa(6.7);
    cout << A.getGpa() <<endl;

    cout <<A.getAge()<<endl;
    // thats creates a layer before accessing the actual attirbute .
    // we can also add authentication layer like we did above in setGpa function
    return 0;
}