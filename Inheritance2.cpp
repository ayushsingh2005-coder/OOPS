//* IMPLEMENTING INHERITANCE IN C++

//* SYNTAX :
// class DerivedClass : accessSpecifier BaseClass{
   // class Members
// }
// here , accessSpecifier tell us about the mode of Inheritance in which we are inheriting the Parent class in C++


#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    string name;
    string model;
    int noofTyres;

    // constructors
    Vehicle(string _name , string _model , int _noofTyres){
        cout << "I am inside Vehicle Ctor "<<endl;
        this->name = _name;
        this->model = _model;
        this->noofTyres = _noofTyres;
    }

public:
    void start_Engine(){
        cout << "Engine is starting " << name <<" " << model <<endl;
    }

    void stop_Engine(){
        cout << "Engine stopped " << name << " " << model << endl;
    }
};

// inheritance
class Car : public Vehicle{
public:
    int noofDoors;
    string TransmissionTypes;

    // constructor
    // *why we define the constructor below like this : the most important reason is : Compiler ko batana ki Car object banne se pehle uske andar jo Vehicle part hai, usko Vehicle(_name, _model, _noofTyres) constructor se initialize karna.
    // so that if we have two constructors above , we let the compiler to know that which constructor it chooses so that the value of parent object would be initialised
    Car(string _name , string _model , int _noofTyres , int _noofdoors , string _TransmissionTypes) : Vehicle(_name,_model,_noofTyres){
        cout << "I am inside Car Ctor "<<endl;
        this->noofDoors = _noofdoors;
        this->TransmissionTypes = _TransmissionTypes;
    }

    void Start_AC(){

        cout << "AC of car has been started of car " << name << endl;
    }
};

int main(){
    Car BMW("BMW" , "M5" ,4 ,4, "Automatic");
    //*when we only run this line after creating parent and child class and thier constructor ,the output we will get states that when we create object of child class ,first the parent class object would be created .IT means that the base class contructor get call first and the all the properties get initialised first then the properties related to child class get initialsed

    BMW.start_Engine();
    BMW.Start_AC();
    BMW.stop_Engine();
    return 0;
}