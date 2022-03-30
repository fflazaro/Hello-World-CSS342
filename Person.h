#include <iostream>
#include <string>
class Person{
    public: 
        Person(string name);
        Person(string name, int age); 
        void getOlder(); 
    private:
        int age; 
        string name; 

};