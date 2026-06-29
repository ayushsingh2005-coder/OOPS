// ** INHERITANCE : ================================================

// similar to inheritance in Life.
// *** Child inherits attributes and behaviours from Parent 
// *** Inheritance is way to create a class from exisitng class
// ** the derived/child/Sub Class inherits some attributes and behaviours from Base/Parent / Super Class , and may have more specialised attributes and behaviours

// *When do we use Inheritance ?
// Use Inheritance whenever an IS-A relationship is identified between objects

// for example : 
// Base Class : Animal 
// derived class : mammal , Reptile , Bird
// Explanation : mammals , reptiles and birds are all types of animals ,forming an "IS-A" relationship.
// * same for vehicle , Employee , Shape , Device

// * Inheritance comes with the property to make the code REUSABLE and EXTENSIBLE .
// for e.g. -- we have defined Superclass vehivle and subclass as truck  , car ,motocycle with their behaviour and attributes.Now someone come and say create a class of Jet , we can to do so by simply inheiting the common property from parent class and just adding disticnt variable to this sub class . here we can see that we dont need to repeat the same variable again and we have easily extend our exisiting code .
// *Although we can inherit all the properties of parent class to Child class but we can control it too 

// * =========================================     TYPES OF INHERITANCE     ==============================================================
// * 1. Single Inheritance                                 |               supported by both Java and C++
// * 2. Multi-level Inheritance                            |               supported by both Java and C++
// * 3. Hierarchial Inheritance                            |               supported by both Java and C++
// * 4. Multiple Inheritance                               |               supported by C++ and through Interfaces in JAVA
// * 5. Hybrid Inheritance                                 |               supported by C++

// **Protected Data member : are accessible within the class and to its derived class unlike private which are accessible within the class but not to its derived class

// ** REMEMBER : MODE OF INHERITANCE only exist in C++ not in java . os learn about this specifically
